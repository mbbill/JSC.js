#include "config.h"

#include "ArrayBuffer.h"
#include "ArrayPrototype.h"
#include "BuiltinNames.h"
#include "ButterflyInlines.h"
#include "CatchScope.h"
#include "CodeBlock.h"
#include "CodeCache.h"
#include "Completion.h"
#include "ConfigFile.h"
#include "Disassembler.h"
#include "Exception.h"
#include "ExceptionHelpers.h"
#include "HeapProfiler.h"
#include "HeapSnapshotBuilder.h"
#include "InitializeThreading.h"
#include "Interpreter.h"
#include "JIT.h"
#include "JSArray.h"
#include "JSArrayBuffer.h"
#include "JSBigInt.h"
#include "JSCInlines.h"
#include "JSFunction.h"
#include "JSInternalPromise.h"
#include "JSInternalPromiseDeferred.h"
#include "JSLock.h"
#include "JSModuleLoader.h"
#include "JSNativeStdFunction.h"
#include "JSONObject.h"
#include "JSSourceCode.h"
#include "JSString.h"
#include "JSTypedArrays.h"
#include "JSWebAssemblyInstance.h"
#include "JSWebAssemblyMemory.h"
#include "LLIntThunks.h"
#include "ObjectConstructor.h"
#include "ParserError.h"
#include "ProfilerDatabase.h"
#include "PromiseDeferredTimer.h"
#include "ProtoCallFrame.h"
#include "ReleaseHeapAccessScope.h"
#include "SamplingProfiler.h"
#include "StackVisitor.h"
#include "StructureInlines.h"
#include "StructureRareDataInlines.h"
#include "SuperSampler.h"
#include "TestRunnerUtils.h"
#include "TypedArrayInlines.h"
#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wtf/Box.h>
#include <wtf/CommaPrinter.h>
#include <wtf/MainThread.h>
#include <wtf/MemoryPressureHandler.h>
#include <wtf/MonotonicTime.h>
#include <wtf/NeverDestroyed.h>
#include <wtf/Scope.h>
#include <wtf/StringPrintStream.h>
#include <wtf/URL.h>
#include <wtf/WallTime.h>
#include <wtf/text/StringBuilder.h>
#include <wtf/text/StringConcatenateNumbers.h>
#ifndef __EMSCRIPTEN__
#include <iostream>
#endif

using namespace JSC;

void jsc_init() {
    static bool initialized = false;
    if (initialized)
        return;
    JSC::Options::enableRestrictedOptions(true);
    JSC::Options::initialize();
    JSC::Options::ensureOptionsAreCoherent();
    WTF::initializeMainThread();
    JSC::initializeThreading();

    initialized = true;
}

JSGlobalObject* jsc_new_global() {
    jsc_init();
    static VM& vm = VM::create(LargeHeap).leakRef();
    JSLockHolder locker(vm);
    JSGlobalObject* globalObject = JSGlobalObject::create(vm, JSGlobalObject::createStructure(vm, jsNull()));
    return globalObject;
}

extern "C" {

CString ret_cstr;

const char* jsc_eval(const char * input) {
    static JSGlobalObject* globalObject = jsc_new_global();

    VM& vm = globalObject->vm();
    JSLockHolder locker(vm);
    auto scope = DECLARE_CATCH_SCOPE(vm);
    String ret_str;
    int ret_len = 0;
    // check syntax
    String source = String::fromUTF8(input);
    SourceOrigin sourceOrigin("interpreter");
    ParserError error;
    checkSyntax(globalObject->vm(), makeSource(source, sourceOrigin), error);
    if (error.isValid()) {
        ret_str = error.message() + ":" + String::number(error.line());
        ret_cstr = ret_str.utf8();
        return ret_cstr.data();
    }
    // eval
    NakedPtr<Exception> evaluationException;
    JSValue returnValue = evaluate(globalObject->globalExec(), makeSource(source, sourceOrigin), JSValue(), evaluationException);
    if (evaluationException)
        ret_str = String("Exception: ") + evaluationException->value().toWTFString(globalObject->globalExec());
    else
        ret_str = String(returnValue.toWTFString(globalObject->globalExec()));

    scope.clearException();
    ret_cstr = ret_str.utf8();
    return ret_cstr.data();
}

// for test shell
#ifndef __EMSCRIPTEN__
int main() {
    String teststr = "Date()";
    std::cout << jsc_eval(teststr.utf8().data()) << std::endl;
    return 0;
}
#endif

} // extern "C"

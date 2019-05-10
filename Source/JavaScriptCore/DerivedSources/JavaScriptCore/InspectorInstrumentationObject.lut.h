// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/InspectorInstrumentationObject.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex inspectorInstrumentationObjectTableIndex[9] = {
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, 8 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { 2, -1 },
};

static const struct HashTableValue inspectorInstrumentationObjectTableValues[3] = {
   { "log", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(inspectorInstrumentationObjectLog), (intptr_t)(1) } },
   { "promiseFulfilled", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(inspectorInstrumentationObjectPromiseFulfilledCodeGenerator), (intptr_t)3 } },
   { "promiseRejected", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(inspectorInstrumentationObjectPromiseRejectedCodeGenerator), (intptr_t)3 } },
};

static const struct HashTable inspectorInstrumentationObjectTable =
    { 3, 7, false, nullptr, inspectorInstrumentationObjectTableValues, inspectorInstrumentationObjectTableIndex };

} // namespace JSC

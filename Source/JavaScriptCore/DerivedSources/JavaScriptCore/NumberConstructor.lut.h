// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/NumberConstructor.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex numberConstructorTableIndex[8] = {
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
};

static const struct HashTableValue numberConstructorTableValues[3] = {
   { "isFinite", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(numberConstructorIsFiniteCodeGenerator), (intptr_t)1 } },
   { "isNaN", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(numberConstructorIsNaNCodeGenerator), (intptr_t)1 } },
   { "isSafeInteger", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(numberConstructorFuncIsSafeInteger), (intptr_t)(1) } },
};

static const struct HashTable numberConstructorTable =
    { 3, 7, false, nullptr, numberConstructorTableValues, numberConstructorTableIndex };

} // namespace JSC

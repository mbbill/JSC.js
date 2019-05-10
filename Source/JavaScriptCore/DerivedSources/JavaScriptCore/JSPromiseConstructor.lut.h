// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/JSPromiseConstructor.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex promiseConstructorTableIndex[9] = {
    { 2, -1 },
    { -1, -1 },
    { 0, 8 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
};

static const struct HashTableValue promiseConstructorTableValues[4] = {
   { "resolve", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorResolveCodeGenerator), (intptr_t)1 } },
   { "reject", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorRejectCodeGenerator), (intptr_t)1 } },
   { "race", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorRaceCodeGenerator), (intptr_t)1 } },
   { "all", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promiseConstructorAllCodeGenerator), (intptr_t)1 } },
};

static const struct HashTable promiseConstructorTable =
    { 4, 7, false, nullptr, promiseConstructorTableValues, promiseConstructorTableIndex };

} // namespace JSC

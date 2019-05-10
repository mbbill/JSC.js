// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/JSPromisePrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex promisePrototypeTableIndex[8] = {
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
};

static const struct HashTableValue promisePrototypeTableValues[3] = {
   { "then", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promisePrototypeThenCodeGenerator), (intptr_t)2 } },
   { "catch", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promisePrototypeCatchCodeGenerator), (intptr_t)1 } },
   { "finally", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(promisePrototypeFinallyCodeGenerator), (intptr_t)1 } },
};

static const struct HashTable promisePrototypeTable =
    { 3, 7, false, nullptr, promisePrototypeTableValues, promisePrototypeTableIndex };

} // namespace JSC

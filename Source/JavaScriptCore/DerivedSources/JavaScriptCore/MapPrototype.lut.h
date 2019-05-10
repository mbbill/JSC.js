// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/MapPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex mapPrototypeTableIndex[8] = {
    { 1, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue mapPrototypeTableValues[3] = {
   { "forEach", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(mapPrototypeForEachCodeGenerator), (intptr_t)0 } },
   { "values", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(mapPrototypeValuesCodeGenerator), (intptr_t)0 } },
   { "keys", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(mapPrototypeKeysCodeGenerator), (intptr_t)0 } },
};

static const struct HashTable mapPrototypeTable =
    { 3, 7, false, nullptr, mapPrototypeTableValues, mapPrototypeTableIndex };

} // namespace JSC

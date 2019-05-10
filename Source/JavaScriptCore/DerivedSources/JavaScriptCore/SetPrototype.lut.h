// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/SetPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex setPrototypeTableIndex[4] = {
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue setPrototypeTableValues[2] = {
   { "forEach", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(setPrototypeForEachCodeGenerator), (intptr_t)0 } },
   { "entries", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(setPrototypeEntriesCodeGenerator), (intptr_t)0 } },
};

static const struct HashTable setPrototypeTable =
    { 2, 3, false, nullptr, setPrototypeTableValues, setPrototypeTableIndex };

} // namespace JSC

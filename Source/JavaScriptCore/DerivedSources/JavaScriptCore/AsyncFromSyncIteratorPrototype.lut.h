// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/AsyncFromSyncIteratorPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex asyncFromSyncIteratorPrototypeTableIndex[8] = {
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { 1, -1 },
};

static const struct HashTableValue asyncFromSyncIteratorPrototypeTableValues[3] = {
   { "next", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(asyncFromSyncIteratorPrototypeNextCodeGenerator), (intptr_t)1 } },
   { "return", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(asyncFromSyncIteratorPrototypeReturnCodeGenerator), (intptr_t)1 } },
   { "throw", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(asyncFromSyncIteratorPrototypeThrowCodeGenerator), (intptr_t)1 } },
};

static const struct HashTable asyncFromSyncIteratorPrototypeTable =
    { 3, 7, false, nullptr, asyncFromSyncIteratorPrototypeTableValues, asyncFromSyncIteratorPrototypeTableIndex };

} // namespace JSC

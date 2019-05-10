// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/JSInternalPromiseConstructor.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex internalPromiseConstructorTableIndex[2] = {
    { 0, -1 },
    { -1, -1 },
};

static const struct HashTableValue internalPromiseConstructorTableValues[1] = {
   { "internalAll", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(internalPromiseConstructorInternalAllCodeGenerator), (intptr_t)1 } },
};

static const struct HashTable internalPromiseConstructorTable =
    { 1, 1, false, nullptr, internalPromiseConstructorTableValues, internalPromiseConstructorTableIndex };

} // namespace JSC

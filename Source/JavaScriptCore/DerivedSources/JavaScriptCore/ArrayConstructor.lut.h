// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/ArrayConstructor.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex arrayConstructorTableIndex[4] = {
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { 0, -1 },
};

static const struct HashTableValue arrayConstructorTableValues[2] = {
   { "of", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(arrayConstructorOfCodeGenerator), (intptr_t)0 } },
   { "from", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(arrayConstructorFromCodeGenerator), (intptr_t)0 } },
};

static const struct HashTable arrayConstructorTable =
    { 2, 3, false, nullptr, arrayConstructorTableValues, arrayConstructorTableIndex };

} // namespace JSC

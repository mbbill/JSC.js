// Automatically generated from ../../../../../../../Source/JavaScriptCore/runtime/ArrayIteratorPrototype.cpp using ../../../../../../../Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex arrayIteratorPrototypeTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue arrayIteratorPrototypeTableValues[1] = {
   { "next", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(arrayIteratorPrototypeNextCodeGenerator), (intptr_t)0 } },
};

static const struct HashTable arrayIteratorPrototypeTable =
    { 1, 1, false, nullptr, arrayIteratorPrototypeTableValues, arrayIteratorPrototypeTableIndex };

} // namespace JSC

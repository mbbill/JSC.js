// Automatically generated from ../../../../../../../Source/JavaScriptCore/runtime/StringIteratorPrototype.cpp using ../../../../../../../Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex stringIteratorPrototypeTableIndex[2] = {
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue stringIteratorPrototypeTableValues[1] = {
   { "next", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringIteratorPrototypeNextCodeGenerator), (intptr_t)0 } },
};

static const struct HashTable stringIteratorPrototypeTable =
    { 1, 1, false, nullptr, stringIteratorPrototypeTableValues, stringIteratorPrototypeTableIndex };

} // namespace JSC

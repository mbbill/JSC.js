// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/BooleanPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex booleanPrototypeTableIndex[4] = {
    { 0, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
};

static const struct HashTableValue booleanPrototypeTableValues[2] = {
   { "toString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(booleanProtoFuncToString), (intptr_t)(0) } },
   { "valueOf", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(booleanProtoFuncValueOf), (intptr_t)(0) } },
};

static const struct HashTable booleanPrototypeTable =
    { 2, 3, false, nullptr, booleanPrototypeTableValues, booleanPrototypeTableIndex };

} // namespace JSC

// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/SymbolPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex symbolPrototypeTableIndex[8] = {
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue symbolPrototypeTableValues[3] = {
   { "description", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(symbolProtoGetterDescription), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "toString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(symbolProtoFuncToString), (intptr_t)(0) } },
   { "valueOf", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(symbolProtoFuncValueOf), (intptr_t)(0) } },
};

static const struct HashTable symbolPrototypeTable =
    { 3, 7, true, nullptr, symbolPrototypeTableValues, symbolPrototypeTableIndex };

} // namespace JSC

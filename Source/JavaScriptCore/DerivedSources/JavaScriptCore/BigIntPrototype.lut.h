// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/BigIntPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex bigIntPrototypeTableIndex[8] = {
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
};

static const struct HashTableValue bigIntPrototypeTableValues[3] = {
   { "toString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(bigIntProtoFuncToString), (intptr_t)(0) } },
   { "toLocaleString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(bigIntProtoFuncToLocaleString), (intptr_t)(0) } },
   { "valueOf", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(bigIntProtoFuncValueOf), (intptr_t)(0) } },
};

static const struct HashTable bigIntPrototypeTable =
    { 3, 7, false, nullptr, bigIntPrototypeTableValues, bigIntPrototypeTableIndex };

} // namespace JSC

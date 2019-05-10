// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/NumberPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex numberPrototypeTableIndex[17] = {
    { -1, -1 },
    { -1, -1 },
    { 1, 16 },
    { 4, -1 },
    { 3, -1 },
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
};

static const struct HashTableValue numberPrototypeTableValues[5] = {
   { "toLocaleString", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(numberProtoFuncToLocaleString), (intptr_t)(0) } },
   { "valueOf", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(numberProtoFuncValueOf), (intptr_t)(0) } },
   { "toFixed", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(numberProtoFuncToFixed), (intptr_t)(1) } },
   { "toExponential", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(numberProtoFuncToExponential), (intptr_t)(1) } },
   { "toPrecision", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(numberProtoFuncToPrecision), (intptr_t)(1) } },
};

static const struct HashTable numberPrototypeTable =
    { 5, 15, false, nullptr, numberPrototypeTableValues, numberPrototypeTableIndex };

} // namespace JSC

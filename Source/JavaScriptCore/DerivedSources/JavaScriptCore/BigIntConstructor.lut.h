// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/BigIntConstructor.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex bigIntConstructorTableIndex[4] = {
    { 1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
};

static const struct HashTableValue bigIntConstructorTableValues[2] = {
   { "asUintN", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(bigIntConstructorFuncAsUintN), (intptr_t)(2) } },
   { "asIntN", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(bigIntConstructorFuncAsIntN), (intptr_t)(2) } },
};

static const struct HashTable bigIntConstructorTable =
    { 2, 3, false, nullptr, bigIntConstructorTableValues, bigIntConstructorTableIndex };

} // namespace JSC

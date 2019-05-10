// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/DateConstructor.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex dateConstructorTableIndex[9] = {
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, 8 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
};

static const struct HashTableValue dateConstructorTableValues[3] = {
   { "parse", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateParse), (intptr_t)(1) } },
   { "UTC", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateUTC), (intptr_t)(7) } },
   { "now", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(dateNow), (intptr_t)(0) } },
};

static const struct HashTable dateConstructorTable =
    { 3, 7, false, nullptr, dateConstructorTableValues, dateConstructorTableIndex };

} // namespace JSC

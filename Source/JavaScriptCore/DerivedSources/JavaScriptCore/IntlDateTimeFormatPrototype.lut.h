// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/IntlDateTimeFormatPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex dateTimeFormatPrototypeTableIndex[4] = {
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { 1, -1 },
};

static const struct HashTableValue dateTimeFormatPrototypeTableValues[2] = {
   { "format", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlDateTimeFormatPrototypeGetterFormat), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "resolvedOptions", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlDateTimeFormatPrototypeFuncResolvedOptions), (intptr_t)(0) } },
};

static const struct HashTable dateTimeFormatPrototypeTable =
    { 2, 3, true, nullptr, dateTimeFormatPrototypeTableValues, dateTimeFormatPrototypeTableIndex };

} // namespace JSC

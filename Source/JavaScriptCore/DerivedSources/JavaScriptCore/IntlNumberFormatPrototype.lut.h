// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/IntlNumberFormatPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex numberFormatPrototypeTableIndex[4] = {
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { 1, -1 },
};

static const struct HashTableValue numberFormatPrototypeTableValues[2] = {
   { "format", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlNumberFormatPrototypeGetterFormat), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "resolvedOptions", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(IntlNumberFormatPrototypeFuncResolvedOptions), (intptr_t)(0) } },
};

static const struct HashTable numberFormatPrototypeTable =
    { 2, 3, true, nullptr, numberFormatPrototypeTableValues, numberFormatPrototypeTableIndex };

} // namespace JSC

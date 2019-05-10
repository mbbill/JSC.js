// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/IntlObject.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex intlObjectTableIndex[8] = {
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { 2, -1 },
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue intlObjectTableValues[4] = {
   { "getCanonicalLocales", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(intlObjectFuncGetCanonicalLocales), (intptr_t)(1) } },
   { "Collator", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createCollatorConstructor), (intptr_t)(0) } },
   { "DateTimeFormat", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createDateTimeFormatConstructor), (intptr_t)(0) } },
   { "NumberFormat", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createNumberFormatConstructor), (intptr_t)(0) } },
};

static const struct HashTable intlObjectTable =
    { 4, 7, false, nullptr, intlObjectTableValues, intlObjectTableIndex };

} // namespace JSC

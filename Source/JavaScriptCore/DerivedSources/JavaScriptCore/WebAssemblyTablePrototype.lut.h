// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/wasm/js/WebAssemblyTablePrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex prototypeTableWebAssemblyTableIndex[8] = {
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { 3, -1 },
};

static const struct HashTableValue prototypeTableWebAssemblyTableValues[4] = {
   { "length", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyTableProtoFuncLength), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
   { "grow", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyTableProtoFuncGrow), (intptr_t)(1) } },
   { "get", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyTableProtoFuncGet), (intptr_t)(1) } },
   { "set", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyTableProtoFuncSet), (intptr_t)(2) } },
};

static const struct HashTable prototypeTableWebAssemblyTable =
    { 4, 7, true, nullptr, prototypeTableWebAssemblyTableValues, prototypeTableWebAssemblyTableIndex };

} // namespace JSC

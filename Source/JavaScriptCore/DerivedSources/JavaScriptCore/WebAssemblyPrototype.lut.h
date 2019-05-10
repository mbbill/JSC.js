// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/wasm/js/WebAssemblyPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex prototypeTableWebAssemblyIndex[8] = {
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, -1 },
    { 2, -1 },
    { 1, -1 },
};

static const struct HashTableValue prototypeTableWebAssemblyValues[3] = {
   { "compile", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyCompileFunc), (intptr_t)(1) } },
   { "instantiate", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyInstantiateFunc), (intptr_t)(1) } },
   { "validate", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyValidateFunc), (intptr_t)(1) } },
};

static const struct HashTable prototypeTableWebAssembly =
    { 3, 7, false, nullptr, prototypeTableWebAssemblyValues, prototypeTableWebAssemblyIndex };

} // namespace JSC

// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/wasm/js/WebAssemblyMemoryPrototype.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex prototypeTableWebAssemblyMemoryIndex[5] = {
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, 4 },
    { 1, -1 },
};

static const struct HashTableValue prototypeTableWebAssemblyMemoryValues[2] = {
   { "grow", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyMemoryProtoFuncGrow), (intptr_t)(1) } },
   { "buffer", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Accessor), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(webAssemblyMemoryProtoFuncBuffer), (intptr_t)static_cast<RawNativeFunction>(nullptr) } },
};

static const struct HashTable prototypeTableWebAssemblyMemory =
    { 2, 3, true, nullptr, prototypeTableWebAssemblyMemoryValues, prototypeTableWebAssemblyMemoryIndex };

} // namespace JSC

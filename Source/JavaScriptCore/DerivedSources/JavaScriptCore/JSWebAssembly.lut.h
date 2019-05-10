// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/wasm/js/JSWebAssembly.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex jsWebAssemblyTableIndex[18] = {
    { -1, -1 },
    { -1, -1 },
    { 0, 16 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, 17 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { 5, -1 },
    { -1, -1 },
    { 4, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { 6, -1 },
};

static const struct HashTableValue jsWebAssemblyTableValues[7] = {
   { "CompileError", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyCompileError), (intptr_t)(0) } },
   { "Instance", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyInstance), (intptr_t)(0) } },
   { "LinkError", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyLinkError), (intptr_t)(0) } },
   { "Memory", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyMemory), (intptr_t)(0) } },
   { "Module", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyModule), (intptr_t)(0) } },
   { "RuntimeError", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyRuntimeError), (intptr_t)(0) } },
   { "Table", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::PropertyCallback), NoIntrinsic, { (intptr_t)static_cast<LazyPropertyCallback>(createWebAssemblyTable), (intptr_t)(0) } },
};

static const struct HashTable jsWebAssemblyTable =
    { 7, 15, false, nullptr, jsWebAssemblyTableValues, jsWebAssemblyTableIndex };

} // namespace JSC

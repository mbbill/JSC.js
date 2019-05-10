// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/StringConstructor.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex stringConstructorTableIndex[8] = {
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, -1 },
};

static const struct HashTableValue stringConstructorTableValues[3] = {
   { "fromCharCode", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), FromCharCodeIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(stringFromCharCode), (intptr_t)(1) } },
   { "fromCodePoint", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(stringFromCodePoint), (intptr_t)(1) } },
   { "raw", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(stringConstructorRawCodeGenerator), (intptr_t)1 } },
};

static const struct HashTable stringConstructorTable =
    { 3, 7, false, nullptr, stringConstructorTableValues, stringConstructorTableIndex };

} // namespace JSC

// Automatically generated from /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/runtime/ReflectObject.cpp using /mnt/d/Dev/webkit-04062019/Source/JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex reflectObjectTableIndex[35] = {
    { 12, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, -1 },
    { -1, -1 },
    { 11, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 10, -1 },
    { 7, 34 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 5, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, 32 },
    { 0, 33 },
    { -1, -1 },
    { 6, -1 },
    { 8, -1 },
    { 9, -1 },
};

static const struct HashTableValue reflectObjectTableValues[13] = {
   { "apply", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(reflectObjectApplyCodeGenerator), (intptr_t)3 } },
   { "construct", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectConstruct), (intptr_t)(2) } },
   { "defineProperty", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectDefineProperty), (intptr_t)(3) } },
   { "deleteProperty", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(reflectObjectDeletePropertyCodeGenerator), (intptr_t)2 } },
   { "get", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectGet), (intptr_t)(2) } },
   { "getOwnPropertyDescriptor", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectGetOwnPropertyDescriptor), (intptr_t)(2) } },
   { "getPrototypeOf", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), ReflectGetPrototypeOfIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectGetPrototypeOf), (intptr_t)(1) } },
   { "has", ((static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(reflectObjectHasCodeGenerator), (intptr_t)2 } },
   { "isExtensible", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectIsExtensible), (intptr_t)(1) } },
   { "ownKeys", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectOwnKeys), (intptr_t)(1) } },
   { "preventExtensions", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectPreventExtensions), (intptr_t)(1) } },
   { "set", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectSet), (intptr_t)(3) } },
   { "setPrototypeOf", static_cast<unsigned>(PropertyAttribute::DontEnum|PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(reflectObjectSetPrototypeOf), (intptr_t)(2) } },
};

static const struct HashTable reflectObjectTable =
    { 13, 31, false, nullptr, reflectObjectTableValues, reflectObjectTableIndex };

} // namespace JSC

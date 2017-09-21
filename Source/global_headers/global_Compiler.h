// billming
// Replacement for wtf/Compiler.h

#ifndef GLOBAL_COMPILER_H
#define GLOBAL_COMPILER_H

#define COMPILER(WTF_FEATURE) (defined WTF_COMPILER_##WTF_FEATURE  && WTF_COMPILER_##WTF_FEATURE)
#define COMPILER_SUPPORTS(WTF_COMPILER_FEATURE) (defined WTF_COMPILER_SUPPORTS_##WTF_COMPILER_FEATURE  && WTF_COMPILER_SUPPORTS_##WTF_COMPILER_FEATURE)
#define COMPILER_QUIRK(WTF_COMPILER_QUIRK) (defined WTF_COMPILER_QUIRK_##WTF_COMPILER_QUIRK  && WTF_COMPILER_QUIRK_##WTF_COMPILER_QUIRK)
// not using clang builtin and features
#define COMPILER_HAS_CLANG_BUILTIN(x) 0
#define COMPILER_HAS_CLANG_FEATURE(x) 0

// could be 14.
#define WTF_CPP_STD_VER 14

#define RELAXED_CONSTEXPR
#define ASAN_ENABLED 0
#define SUPPRESS_ASAN

// clang
#if defined(__clang__)
#define WTF_COMPILER_CLANG 1
#endif
// clang or gcc
#if defined(__GNUC__)
#define WTF_COMPILER_GCC_OR_CLANG 1
#define CDECL __attribute__ ((__cdecl))
#define FASTCALL __fastcall
#define ALWAYS_INLINE inline __attribute__((__always_inline__))
#define NEVER_INLINE __attribute__((__noinline__))
#define NO_RETURN __attribute((__noreturn__))
#define UNUSED_LABEL(label) UNUSED_PARAM(&& label)
#define UNUSED_PARAM(variable) (void)variable
#define JSC_HOST_CALL __attribute__ ((fastcall))
#define LIKELY(x) __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#define RETURNS_NONNULL __attribute__((returns_nonnull))
#define PURE_FUNCTION __attribute__((__pure__))
#define UNUSED_FUNCTION __attribute__((unused))
#define REFERENCED_FROM_ASM __attribute__((__used__))
#define WARN_UNUSED_RETURN __attribute__((__warn_unused_result__))
#define WTF_EXPORT __attribute__((visibility("default")))
#define WTF_IMPORT WTF_EXPORT
#define EXPORT_DATA
#define IMPORT_DATA
#endif

// msvc
#if defined(_MSC_VER)
#define WTF_COMPILER_MSVC 1
#define CDECL __cdecl
#define FASTCALL  __attribute__ ((fastcall))
#define ALWAYS_INLINE __forceinline
#define NEVER_INLINE __declspec(noinline)
#define NO_RETURN __declspec(noreturn)
#define UNUSED_LABEL(label) if (false) goto label
#define UNUSED_PARAM(variable) (void)&variable
#define JSC_HOST_CALL __fastcall
#define LIKELY(x) (x)
#define UNLIKELY(x) (x)
#define RETURNS_NONNULL
#define PURE_FUNCTION
#define UNUSED_FUNCTION
#define REFERENCED_FROM_ASM
#define WARN_UNUSED_RETURN
#define __STDC_FORMAT_MACROS
#define __STDC_LIMIT_MACROS
#define __has_include(path) 0
#define _WINDOWS
#pragma strict_gs_check(on)
#define WTF_EXPORT __declspec(dllexport)
#define WTF_IMPORT __declspec(dllimport)
#define EXPORT_DATA WTF_EXPORT
#define IMPORT_DATA WTF_IMPORT
#endif

#if defined(BUILDING_WTF) || defined(STATICALLY_LINKED_WITH_WTF)
#define WTF_EXPORTDATA EXPORT_DATA
#define WTF_EXPORT_PRIVATE WTF_EXPORT
#else
#define WTF_EXPORTDATA IMPORT_DATA
#define WTF_EXPORT_PRIVATE WTF_IMPORT
#endif
#define WTF_EXPORT_STRING_API WTF_EXPORT_PRIVATE
#define WTF_HIDDEN
#define WTF_HIDDEN_DECLARATION
#define WTF_INTERNAL

#if defined(BUILDING_JavaScriptCore) || defined(STATICALLY_LINKED_WITH_JavaScriptCore)
#define JS_EXPORTDATA EXPORT_DATA
#define JS_EXPORT_PRIVATE WTF_EXPORT
#else
#define JS_EXPORTDATA IMPORT_DATA
#define JS_EXPORT_PRIVATE WTF_IMPORT
#endif
#define JS_EXPORT_HIDDEN WTF_HIDDEN
#define JS_EXPORTCLASS JS_EXPORT_PRIVATE

#ifdef __cplusplus
#define WTF_EXTERN_C_BEGIN extern "C" {
#define WTF_EXTERN_C_END }
#else
#define WTF_EXTERN_C_BEGIN
#define WTF_EXTERN_C_END
#endif

#define FALLTHROUGH
#define NO_RETURN_WITH_VALUE NO_RETURN
#define NO_RETURN_DUE_TO_CRASH NO_RETURN
// used by some objcpp headers
#define OBJC_CLASS class
#define WTF_ARM_ARCH_AT_LEAST(N) 0


#endif // GLOBAL_COMPILER_H

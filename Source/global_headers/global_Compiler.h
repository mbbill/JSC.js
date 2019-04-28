#pragma once

#pragma once

#ifndef __GNUC__
#error "Expect GNU compatible compiler."
#endif
#define WTF_COMPILER_GCC_COMPATIBLE 1

#if defined(__clang__)
#define WTF_COMPILER_CLANG 1
#else
#define WTF_COMPILER_GCC 1
#endif

#if __SIZEOF_POINTER__ == 8
#define WTF_CPU_ADDRESS64 1
#elif __SIZEOF_POINTER__ == 4
#define WTF_CPU_ADDRESS32 1
#endif

#define FASTCALL __attribute__((fastcall))
#define ALWAYS_INLINE inline __attribute__((__always_inline__))
#define NEVER_INLINE __attribute__((__noinline__))
#define NO_RETURN __attribute((__noreturn__))
#define NOT_TAIL_CALLED __attribute__((not_tail_called))
#define UNUSED_LABEL(label) UNUSED_PARAM(&& label)
#define UNUSED_PARAM(variable) (void)variable
#define JSC_HOST_CALL __attribute__((fastcall))
#define LIKELY(x) __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)
#define RETURNS_NONNULL __attribute__((returns_nonnull))
#define PURE_FUNCTION __attribute__((__pure__))
#define UNUSED_FUNCTION __attribute__((unused))
#define REFERENCED_FROM_ASM __attribute__((__used__))
#define WARN_UNUSED_RETURN __attribute__((__warn_unused_result__))
#define EXPORT_DATA_DECLARATION WTF_EXPORT
#define IMPORT_DATA_DECLARATION

#define WTF_COMPILER_SUPPORTS_FASTCALL_CALLING_CONVENTION 0
#define CALLING_CONVENTION_IS_STDCALL 0
#define JIT_OPERATION

#define COMPILER(WTF_FEATURE) (defined WTF_COMPILER_##WTF_FEATURE  && WTF_COMPILER_##WTF_FEATURE)
#define COMPILER_SUPPORTS(WTF_COMPILER_FEATURE) (defined WTF_COMPILER_SUPPORTS_##WTF_COMPILER_FEATURE  && WTF_COMPILER_SUPPORTS_##WTF_COMPILER_FEATURE)
#define COMPILER_QUIRK(WTF_COMPILER_QUIRK) (defined WTF_COMPILER_QUIRK_##WTF_COMPILER_QUIRK  && WTF_COMPILER_QUIRK_##WTF_COMPILER_QUIRK)

#define WTF_EXPORT
#define WTF_IMPORT
#define WTF_EXPORT_PRIVATE
#define WTF_INTERNAL
#define JS_EXPORTDATA
#define JS_EXPORT_PRIVATE

#define ASAN_ENABLED 0
#define SUPPRESS_ASAN

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

#define WTF_ARM_ARCH_AT_LEAST(N) 0
#define OBJC_CLASS class
#define WTF_CPP_STD_VER 14

////////////////////////////////////////////////////////////////////////////////
// billming, Following sections are copied from wtf/Compiler.h

/* IGNORE_WARNINGS */

/* Can't use WTF_CONCAT() and STRINGIZE() because they are defined in
 * StdLibExtras.h, which includes this file. */
#define _COMPILER_CONCAT_I(a, b) a ## b
#define _COMPILER_CONCAT(a, b) _COMPILER_CONCAT_I(a, b)

#define _COMPILER_STRINGIZE(exp) #exp

#define _COMPILER_WARNING_NAME(warning) "-W" warning

#if COMPILER(GCC) || COMPILER(CLANG)
#define IGNORE_WARNINGS_BEGIN_COND(cond, compiler, warning) \
    _Pragma(_COMPILER_STRINGIZE(compiler diagnostic push)) \
    _COMPILER_CONCAT(IGNORE_WARNINGS_BEGIN_IMPL_, cond)(compiler, warning)

#define IGNORE_WARNINGS_BEGIN_IMPL_1(compiler, warning) \
    _Pragma(_COMPILER_STRINGIZE(compiler diagnostic ignored warning))
#define IGNORE_WARNINGS_BEGIN_IMPL_0(compiler, warning)
#define IGNORE_WARNINGS_BEGIN_IMPL_(compiler, warning)


#define IGNORE_WARNINGS_END_IMPL(compiler) _Pragma(_COMPILER_STRINGIZE(compiler diagnostic pop))

#if defined(__has_warning)
#define _IGNORE_WARNINGS_BEGIN_IMPL(compiler, warning) \
    IGNORE_WARNINGS_BEGIN_COND(__has_warning(warning), compiler, warning)
#else
#define _IGNORE_WARNINGS_BEGIN_IMPL(compiler, warning) IGNORE_WARNINGS_BEGIN_COND(1, compiler, warning)
#endif

#define IGNORE_WARNINGS_BEGIN_IMPL(compiler, warning) \
    _IGNORE_WARNINGS_BEGIN_IMPL(compiler, _COMPILER_WARNING_NAME(warning))

#endif // COMPILER(GCC) || COMPILER(CLANG)


#if COMPILER(GCC)
#define IGNORE_GCC_WARNINGS_BEGIN(warning) IGNORE_WARNINGS_BEGIN_IMPL(GCC, warning)
#define IGNORE_GCC_WARNINGS_END IGNORE_WARNINGS_END_IMPL(GCC)
#else
#define IGNORE_GCC_WARNINGS_BEGIN(warning)
#define IGNORE_GCC_WARNINGS_END
#endif

#if COMPILER(CLANG)
#define IGNORE_CLANG_WARNINGS_BEGIN(warning) IGNORE_WARNINGS_BEGIN_IMPL(clang, warning)
#define IGNORE_CLANG_WARNINGS_END IGNORE_WARNINGS_END_IMPL(clang)
#else
#define IGNORE_CLANG_WARNINGS_BEGIN(warning)
#define IGNORE_CLANG_WARNINGS_END
#endif

#if COMPILER(GCC) || COMPILER(CLANG)
#define IGNORE_WARNINGS_BEGIN(warning) IGNORE_WARNINGS_BEGIN_IMPL(GCC, warning)
#define IGNORE_WARNINGS_END IGNORE_WARNINGS_END_IMPL(GCC)
#else
#define IGNORE_WARNINGS_BEGIN(warning)
#define IGNORE_WARNINGS_END
#endif

#define ALLOW_DEPRECATED_DECLARATIONS_BEGIN IGNORE_WARNINGS_BEGIN("deprecated-declarations")
#define ALLOW_DEPRECATED_DECLARATIONS_END IGNORE_WARNINGS_END

#define ALLOW_NEW_API_WITHOUT_GUARDS_BEGIN IGNORE_CLANG_WARNINGS_BEGIN("unguarded-availability-new")
#define ALLOW_NEW_API_WITHOUT_GUARDS_END IGNORE_CLANG_WARNINGS_END

#define ALLOW_UNUSED_PARAMETERS_BEGIN IGNORE_WARNINGS_BEGIN("unused-parameter")
#define ALLOW_UNUSED_PARAMETERS_END IGNORE_WARNINGS_END

#define ALLOW_NONLITERAL_FORMAT_BEGIN IGNORE_WARNINGS_BEGIN("format-nonliteral")
#define ALLOW_NONLITERAL_FORMAT_END IGNORE_WARNINGS_END

#define IGNORE_RETURN_TYPE_WARNINGS_BEGIN IGNORE_WARNINGS_BEGIN("return-type")
#define IGNORE_RETURN_TYPE_WARNINGS_END IGNORE_WARNINGS_END

#define IGNORE_NULL_CHECK_WARNINGS_BEGIN IGNORE_WARNINGS_BEGIN("nonnull")
#define IGNORE_NULL_CHECK_WARNINGS_END IGNORE_WARNINGS_END

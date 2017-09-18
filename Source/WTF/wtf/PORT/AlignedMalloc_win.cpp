#include <FastMalloc.h>
#include <windows.h>

namespace WTF {

void* fastAlignedMalloc(size_t alignment, size_t size) 
{
    void* p = _aligned_malloc(size, alignment);
    if (UNLIKELY(!p))
        CRASH();
    return p;
}

void* tryFastAlignedMalloc(size_t alignment, size_t size) 
{
    return _aligned_malloc(size, alignment);
}

void fastAlignedFree(void* p) 
{
    _aligned_free(p);
}

} // namespace WTF

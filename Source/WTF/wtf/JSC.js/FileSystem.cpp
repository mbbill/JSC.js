// billming, this file includes additional function implementation for FileSystemPOSIX.cpp
#include "config.h"
#include "FileSystem.h"
#include <wtf/Assertions.h>
#include <wtf/text/CString.h>

namespace WebCore {
namespace FileSystem {

bool moveFile(const String& oldPath, const String& newPath)
{
    ASSERT_NOT_IMPLEMENTED_YET();
    return false;
}

CString fileSystemRepresentation(const String& path)
{
    ASSERT_NOT_IMPLEMENTED_YET();
    return path.utf8();
}

/* On linux file names are just raw bytes, so also strings that cannot be encoded in any way
 * are valid file names. This mean that we cannot just store a file name as-is in a String
 * but we have to escape it.
 * On Windows the GLib file name encoding is always UTF-8 so we can optimize this case. */
String stringFromFileSystemRepresentation(const char* fileSystemRepresentation)
{
    if (!fileSystemRepresentation)
        return String();

    // billming, TODO: see comments before.
    return String::fromUTF8(fileSystemRepresentation);
}

} // namespace FileSystem
} // namespace WebCore

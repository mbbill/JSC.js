#ifndef UNISTD_H
#define UNISTD_H

// to exclude some incompatible functions
#ifdef __STDC__
#undef __STDC__
#endif
#define __STDC__ 1

#include <process.h> // for getpid();
// by FileSystem.cpp
#include <fcntl.h>
#include <io.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>
#include <direct.h>
#include <global_Platform.h> // for WTF_EXPORT
#include <Windows.h>

#ifdef __cplusplus
extern "C"
{
#endif
WTF_EXPORT int getpid(void); // StringImpl.cpp
WTF_EXPORT int getpagesize(void); // PageBlock.cpp

WTF_EXPORT unsigned sleep(unsigned seconds); // VMInspector.cpp

// SharedBufferPOSIX.cpp
typedef int ssize_t;
WTF_EXPORT int ftruncate(int fd, _off_t length);
// windows stat.h doesn't have this, so let's define it here.
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
// for access, F_OK -> existence
// see https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/access-waccess
#define F_OK 00
#define S_IRWXU 0
WTF_EXPORT char *dirname(char *path);

#ifndef PATH_MAX
#define PATH_MAX MAX_PATH
#endif

typedef struct dirent
{
   char d_name[MAX_PATH + 1];                  /* File name */
   size_t d_namlen;                            /* Length of name without \0 */
   int d_type;                                 /* File type */
} dirent;

typedef struct DIR
{
   dirent           curentry;                  /* Current directory entry */
   WIN32_FIND_DATAA find_data;                 /* Private file data */
   int              cached;                    /* True if data is valid */
   HANDLE           search_handle;             /* Win32 search handle */
   char             patt[MAX_PATH + 3];        /* Initial directory name */
} DIR;

// Not using #define because I don't want to pollute all namespaces. Otherwise things like 
// FilePrintStream::open won't work.
WTF_EXPORT int open(const char *pathname, int flags, ...);
WTF_EXPORT int close(int fd);
WTF_EXPORT long lseek(int fd,long offset,int origin);
WTF_EXPORT int read(int fd,void *buffer,unsigned int count);
WTF_EXPORT int write(int fd,	const void *buffer,	unsigned int count);

WTF_EXPORT DIR *opendir(const char *dirname);
WTF_EXPORT struct dirent *readdir(DIR *dirp);
WTF_EXPORT int closedir(DIR *dirp);

WTF_EXPORT int rmdir(const char *dirname);
WTF_EXPORT int access(const char *path,int mode);
WTF_EXPORT int mkdir(const char *dirname, int mode);
WTF_EXPORT int fnmatch(const char *pattern, const char *string, int flags);
WTF_EXPORT int mkstemp(char *temp);
WTF_EXPORT int link(const char *oldpath, const char *newpath);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // UNISTD_H

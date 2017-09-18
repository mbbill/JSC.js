#ifndef STRINGS_H
#define STRINGS_H

#ifdef __cplusplus
extern "C"
{
#endif

int strncasecmp(const char* s1, const char* s2, size_t len);
int strcasecmp(const char* s1, const char* s2);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // STRINGS_H

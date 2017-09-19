#ifndef SYS_TIME_H
#define SYS_TIME_H

#ifdef  __cplusplus
extern "C" {
#endif

// timeval
#ifndef _TIMEVAL_DEFINED
#define _TIMEVAL_DEFINED

struct timeval
{
	long tv_sec;
	long tv_usec;
};

#endif /* _TIMEVAL_DEFINED */

// sys/time.h
int gettimeofday(struct timeval *, void *);

#ifdef  __cplusplus
}
#endif

#endif // SYS_TIME_H

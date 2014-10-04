
#ifndef __SYS_TIME_H
#define __SYS_TIME_H

#ifndef __DEFS_H__
#include <_defs.h>
#endif

#ifndef _TIMEVAL_DEFINED
#define _TIMEVAL_DEFINED
struct timeval {
  long tv_sec;     /* seconds */
  long tv_usec;    /* microseconds */
};

struct timezone {
  int tz_minuteswest; /* minutes west of Greenwich */
  int tz_dsttime;     /* type of dst correction */
};
#endif /* _TIMEVAL_DEFINED */

int _RTL_FUNC gettimeofday (struct timeval * tv, struct timezone * tz);

#endif

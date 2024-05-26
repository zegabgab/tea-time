#include <errno.h>
#include <stdio.h>
#include <string.h>

#define CHECK_ERROR(ERR, OFFSET, ON_ERR) {\
    if ((ERR)) {\
        fprintf(stderr, "(%s:%d) ERROR: %s\n", __FILE__, __LINE__ + OFFSET, strerror(errno));\
        ON_ERR;\
    }\
}

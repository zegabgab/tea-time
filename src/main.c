#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <string.h>

#define CHECK_ERROR(ERR, ON_ERR, OFFSET) {\
    if ((ERR)) {\
        fprintf(stderr, "(%s:%d) ERROR: %s\n", __FILE__, __LINE__ + OFFSET, strerror(errno));\
        ON_ERR;\
    }\
}

struct args {};
struct time {};

int parse_args(struct args *args);
int count_down(struct time *timer);
int notify_end();

int main(int argc, char **argv) {
    struct args args;
    int err;
    err = parse_args(&args);
    CHECK_ERROR(err, return 69, -1);
}

int parse_args(struct args *args) {
    errno = ENOENT;
    return 1;
}

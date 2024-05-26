#include <stdio.h>
#include <time.h>

#include "check-error.h"

struct args {};
struct time {};

int parse_args(struct args *args);
int count_down(struct time *timer);
int notify_end();

int add(int left, int right) {
    return left + right;
}

int main(int argc, char **argv) {
    struct args args;
    int err;
    err = parse_args(&args);
    CHECK_ERROR(err, -1, return 69);
}

int parse_args(struct args *args) {
    errno = ENOENT;
    return 1;
}

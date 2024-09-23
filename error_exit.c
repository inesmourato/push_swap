#include "push_swap.h"

void error_exit(const char *message) {
    if (message)
        fprintf(stderr, "Error: %s\n", message);
    else
        fprintf(stderr, "Error\n");
    exit(EXIT_FAILURE);
}
#include <stdio.h>
#include <string.h>
#include "hello.h"

int main(void) {
    const char *result = sayMyName();

    if (result == NULL) {
        fprintf(stderr, "Error: sayMyName() respond with NULL-Value.\n");
        return 1;
    }

    if (strcmp(result, "Hello Heisenberg") != 0) {
        fprintf(stderr, "Error: expected 'Hello Heisenberg', but recived '%s'\n", result);
        return 1;
    }

    printf("Test  successful.\n");
    return 0;
}
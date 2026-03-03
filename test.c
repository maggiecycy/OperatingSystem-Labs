#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Hello Maggie! OS lab environment is READY.\n");
    printf("My Process ID is: %d\n", getpid());
    return 0;
}
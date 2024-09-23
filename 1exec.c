#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, const char** argv) {
    printf("before execv\n");
    execv("/bin/ls",argv);
    printf("after execv");
    return 0;
}

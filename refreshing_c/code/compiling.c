#include <stdio.h>

int main(int argc, char *argv[]) {
    // printf prints out a formatted string
    printf("%s\n", "Hello world!");

    // Print out the first command line argument
    printf("%s\n", argv[1]);

    // A return value of 0 means there were no errors
    return 0;
}

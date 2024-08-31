#include <stdio.h>

// Takes in an integer
void modify1(int z) {
    z = 5;
}

// Takes in a pointer to an integer
void modify2(int *z) {
    *z = 5;
}

int main(int argc, char *argv[]) {
    // Declare an integer
    int x = 4;
    
    // Declare a pointer that references x using the & syntax
    int *y = &x;

    modify1(x);
    printf("The value of x is %d\n", x);

    modify2(y);
    // We can get the value at the pointer by using the * syntax
    printf("The value of *y is %d\n", *y);

    // What's the value of x?
    printf("The value of x is %d\n", x);

    return 0;
}


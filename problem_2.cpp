// Problem 2
// Even Fibonacci numbers

#include <stdio.h>

int main(int argc, char** argv) {
    int sum = 0;
    int f1  = 1;
    int f2  = 1;
    int ft;
    while (f2 < 4000000) {
        if (f2%2 == 0)
            sum += f2;
        ft  = f2;
        f2 += f1;
        f1  = ft;
    }
    printf("%d\n", sum);
}
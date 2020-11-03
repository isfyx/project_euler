// Problem 3
// Largest prime factor

#include <stdio.h>

int main(int argc, char** argv) {
    long n = 600851475143;
    int  i = 2;
    while (n > 1) {
        for (i; n%i !=0; i++);
        n /= i;
    }
    printf("%d\n", i);
}
// Problem 3
//
// Largest prime factor
//
// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143?

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
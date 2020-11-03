// Problem 5
//
// Smallest multiple
//
// 2520 is the smallest number that can be divided by each of the
// numbers from 1 to 10 without any remainder.
//
// What is the smallest positive number that is evenly divisible by
// all of the numbers from 1 to 20?

#include <stdio.h>

int main(int argc, char** argv) {
    int primes[]      = {2, 3, 5, 7, 11, 13, 17, 19};
    int prime_count[] = {0, 0, 0, 0,  0,  0,  0,  0};
    for (int i=0; i < 8; i++) {
        int n = primes[i];
        while (n <= 20) {
            prime_count[i]++;
            n *= primes[i];
        }
    }
    int n = 1;
    for (int i=0; i < 8; i++)
        for (int j=0; j < prime_count[i]; j++)
            n *= primes[i];
    printf("%d\n", n);
}
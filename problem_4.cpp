// Problem 4
// Largest palindrome product

#include <stdio.h>

int main(int argc, char** argv) {
    int p = 0;
    for (int i = 999; i > 99; i--) {
        if (i*i < p)
            break;
        for (int j = i; j > 99; j--) {
            if (i*j < p)
                break;
            int n = i*j;
            int b = n;
            int nr = 0;
            while (b > 0) {
                nr = nr*10 + b%10;
                b  = b/10;
            }
            if (n == nr && n > p)
                p = n;
        }
    }
    printf("%d\n", p);
}
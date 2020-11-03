// Problem 1
// Multiples of 3 and 5

#include <stdio.h>

int main(int argc, char** argv)
{
    int sum = 0;
    for (int i = 3; i < 1000; i += 3)
        sum += i;
    for (int i = 5; i < 1000; i += 5)
        sum += i;
    for (int i = 15; i < 1000; i += 15)
        sum -= i;
    printf("%d\n", sum);
}
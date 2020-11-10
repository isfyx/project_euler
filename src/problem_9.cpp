// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which:
//
//     a^2 + b^2 = c^2
//
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
//
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <stdio.h>
#include <cmath>

int main(int argc, char const *argv[])
{
    double a, b, c;
    for (a = 1; a < 333; a++) {
        for (b = 666-a; b > a; b--) {
            c = sqrt(a*a+b*b);
            if (c-floor(c) == 0 && a+b+c == 1000)
                goto end;
        }
    }
    printf("No Pythagorean triplet found!\n");
    return 1;
    end:;
    printf("%.0f\n", a*b*c);
    return 0;
}

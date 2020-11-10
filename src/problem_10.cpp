// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// 
// Find the sum of all the primes below two million.

#include <cstdio>

typedef struct IntCell {
    int data;
    IntCell *next;
} IntCell;

int main(int argc, char **argv) {
    IntCell *head = new IntCell({2, nullptr});
    IntCell *tail = head;
    int len = 1;
    for (int i=3; i < 2000000; i+=2) {
        IntCell *c = head;
        while (c != nullptr) {
            if (i%c->data == 0)
                goto skip;
            c = c->next;
        }
        printf("%d\n", i);
        tail->next = new IntCell({i, nullptr});
        tail = tail->next;
        len++;
        skip:;
    }
    long sum = 0;
    for (IntCell *icp = head; icp != nullptr; icp=icp->next)
        sum += icp->data;
    printf("%ld\n", sum);
}
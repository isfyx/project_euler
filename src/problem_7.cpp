// Problem 7
//
// 10001st prime
//
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we
// can see that the 6th prime is 13.
//
// What is the 10 001st prime number?

#include <stdio.h>

typedef struct IntCell {
    int data;
    IntCell *next;
} IntCell;

int main(int argc, char **argv) {
    IntCell *head = new IntCell({2, nullptr});
    IntCell *tail = head;
    int len = 1;
    for (int i=3; len < 10001; i+=2) {
        IntCell *c = head;
        while (c != nullptr) {
            if (i%c->data == 0)
                goto skip;
            c = c->next;
        }
        tail->next = new IntCell({i, nullptr});
        tail = tail->next;
        len++;
        skip:;
    }
    printf("%d\n", tail->data);
}

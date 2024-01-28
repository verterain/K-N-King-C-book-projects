#include <stdio.h>

int main(void) {
    int d, n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (d = 2; d < n; d++) {
        if (n % d == 0)
            break;
    }

    if (d < n)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is prime\n", n);
}

// the break statement is particularly useful for writing loops in which the exit point is in the middle of the body rather than at the beginning or end. Loops that read user inpu, terminating when a particular value is entered, often fall into this category:

// for (;;) {
    // printf("enter a number (and 0 to stop): ");
    // scanf("%d", &n);
    // if (n == 0)
    //     break;
    // printf("%d cubed is %d\n", n, n * n * n);
// }

// a break statement transfers control out of the innermost enclosing while, do, for or switch statement. Thus, when these statements are nested, the break statement can escape only one level of nesting. Consider the case of a switch statement nested inside a while statenment:

// while (...) {
//     switch (...) {
//         ...
//         break;
//         ...
//     }
// }

// the break statement transfers control out of the switch statement, but not out of the while loop
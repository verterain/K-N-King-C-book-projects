//  Write a program that asks the user to enter a fraction,
//    then reduces the fraction to lowest terms:

//        Enter a fraction: 6/12
//        In lowest terms: 1/2

//        Hint: To reduce a fraction to lowest terms, first compute
//        the GCD of the numerator and denominator. Then divide both
//        the numerator and denominator by the GCD.

#include <stdio.h>

int main(void) {
    int numerator, denominator, n, d, gcd;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    n = numerator;
    d = denominator;

    while (d != 0) {
        gcd = n % d;
        n = d;
        d = gcd;
    }
    printf("GCD: %d\n", n);

    numerator /= n;
    denominator /= n;

    printf("In lowest terms: %d/%d\n\n", numerator, denominator);

    return 0;
}
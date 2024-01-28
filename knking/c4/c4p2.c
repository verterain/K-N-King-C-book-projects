// Extend the program from project 1 to handle three-digit number

#include <stdio.h>

int main(void) {
    int input, d1, d2, d3;
    printf("Enter a three-digit number: ");
    scanf("%d", &input);
    
    d3 = input / 100;
    input %= 100;
    d2 = input / 10;
    d1 = input % 10;

    printf("%d%d%d\n", d1, d2, d3);

}
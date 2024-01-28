// prints a table of squares using a for statement

#include <stdio.h>

int main(void) {
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);
    }
    return 0;
}

// int main(void) {
//     int i, n, odd, square;

//     printf("This program prints a table of squares.\n");
//     printf("Enter the number of entries in table: ");
//     scanf("%d", &n);

//     i = 1;
//     odd = 3;

//     for (square = 1; i <= n; odd += 2) {
//         printf("%10d%10d\n", i, square);
//         ++i;
//         square += odd;
//     }

//     return 0;

// }
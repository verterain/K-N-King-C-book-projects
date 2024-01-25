/*
 * Write a program that prompts the user to enter two dates and then
 * indicates which date comes earlier on the calendar:
 * Enter first date (mm/dd/yy): 3/6/08
 * Enter second date (mm/dd/yy): 5/17/07
 * 5/17/07 is earlier than 3/6/08
 */

#include <stdio.h>

int main(void) {
    int m1, d1, y1;
    int m2, d2, y2;

    printf("Enter first date: ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date: ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (y1 > y2)
        printf("\n%d/%d/%.2d is earlier that %d/%d/%.2d\n", m2, d2, y2, m1, d1, y1);
    else if (y1 < y2)
        printf("\n%d/%d/%.2d is earlier that %d/%d/%.2d\n", m1, d1, y1, m2, d2, y2);
    else if (y1 == y2 && m1 > m2)
        printf("\n%d/%d/%.2d is earlier that %d/%d/%.2d\n", m2, d2, y2, m1, d1, y1);
    else if (y1 == y2 && m1 < m2)
        printf("\n%d/%d/%.2d is earlier that %d/%d/%.2d\n", m1, d1, y1, m2, d2, y2);
    else if (y1 == y2 && m1 == m2 && d1 > d2)
        printf("\n%d/%d/%.2d is earlier that %d/%d/%.2d\n", m2, d2, y2, m1, d1, y1);
    else 
        printf("\n%d/%d/%.2d is earlier that %d/%d/%.2d\n", m1, d1, y1, m2, d2, y2); 

    return 0;
}   
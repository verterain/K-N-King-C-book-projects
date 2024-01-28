#include <stdio.h>

int main(void) {
    int i1, i2, i3;

    printf("Enter three-number digit: ");
    scanf("%1d%1d%d\n", &i1, &i2, &i3);
    printf("%d%d%d\n", i3, i2, i1);
    
    return 0;
}
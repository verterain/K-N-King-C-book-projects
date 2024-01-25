#include <stdio.h>

int main(void) {
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if(grade > 100 || grade < 0) {
        printf("Error: invalid grade\n");
        return 1;
    }

    switch(grade / 10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Letter grade: %s\n", "F");
            break;
        case 6:
            printf("Letter grade: %s\n", "D");
            break;
        case 7:
            printf("Letter grade: %s\n", "C");
            break;
        case 8:
            printf("Letter grade: %s\n", "B");
            break;
        case 9:
            printf("Letter grade: %s\n", "A");
            break;
        default:
            printf("Letter grade: %s\n", "A");
            break;
        
    }

    return 0;
}
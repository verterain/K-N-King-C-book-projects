#include <stdio.h>

int main(void) {
    int digits = 0, n;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s).\n", digits);
}

// do while loop jest tutaj useful, bo jeśli uzylibysmy samego while loopa, to kiedy n na poczatku wynosiloby 0, petla w ogole by sie nie odpalila
// while loop jest czesciej uzywany, ale do while loop jest przydatny dla petli ktore muszą się odpalić przynajmniej raz
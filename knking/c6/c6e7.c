// the following example, which reads a series of numbers and computes their sum, illustrates a simple use of continue. The loop terminates when 10 nonzero numbers have been read. Whenever the 0
// is read, the continue statement is executed, skipping the rest of the loop body (the statements sum += i; and n++) but remaining inside the loop

// #include <stdio.h>

// int main(void) {
//     int i
//     int n = 0;
//     int sum = 0;
//     while (n < 10) {
//         scanf("%d", &i);
//         if (i == 0)
//             continue;
//         sum += i;
//         n++;
//         /*continue jumps here*/
//     }
// }

// If continue was not available, we could have written the example as follows:

// int main(void) {
//     int i;
//     int n = 0;
//     int sum = 0;
//     while (n < 10) {
//         scanf("%d", &i);
//         if (i != 0) {
//             sum += i;
//             n++
//         }
//     }
// }


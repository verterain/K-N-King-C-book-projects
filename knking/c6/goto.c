// break and continue are jump statements that transfer control from one point in the program to another. Both are restricted: the targe of a break is a point just beyond the end of the enclosing loop, while the
// target of a continue is a point just before the end of the loop.
// The goto statement, on the other hand, is capable of jumping to any statement in a function, provided that the statement has a label.
// A label is just an identifier placed at the beginning of a statement:
    // identifier : statement

// A statement may have more than one label. The goto statement itself has the form
//  goto identifier;

// Executing the statement goto L; transfers control to the statement that follows the label L, which must be in the same function as the goto statement itself.
// If C didn't have the break statement, here's how we might use a goto statement to exit prematurely from a loop:

// for (d = 2; d < n; d++)
//     if (n % d == 0)
//     goto done;
    
    // done:
    // if (d < n)
    //     printf("%d is divisible by %d\n", n, d);
    // else
    //     printf("%d is prime\n");

// consider the problem of exiting the loop from within a switch statement. The break statement doesn't quite have the desired effect; it exits from the switch, but not from the loop. A goto statement solves the problem:

// while (...) {
//     switch (...) {
//         ...
//         goto loop_done; /*break won't work here*/
//     }
// }
//     loop_done: ...
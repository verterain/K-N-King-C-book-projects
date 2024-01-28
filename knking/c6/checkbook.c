// Many simple interactive programs are menu-based: they present the user with a list of commands to choose from. Once the user has selected a command, the program performs the desired action, then prompts the user for another command.
// This process continues until the user selects an exit or quit command.
// The heart of such a program will obviously be a loop. Inside the loop will be statements that prompt the user for a command, read the command, then decide what action to take:

// for (;;) {
//     prompt user to enter command;
//     read command;
//     execute command;
// }
// Executing the command will require a switch statement (or cascaded if statement):
// for (;;) {
//     prompt user to enter command;
//     read command;
//     switch(command) {
//         case command: perform operation; break;
//         case command2: perform operation2; break;
//         ...
//         default: print error message; break;
//     }
// }

// To illustrate this arrangement, let's develop a program that maintains a checkbook balance. 

#include <stdio.h>

int main(void) {
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, ");
    printf("3=balance, 4=exit\n\n");
    for (;;) {
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current balance: $%.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Commands: 0=clear, 1=credit, 2=debit, ");
                printf("3=balance, 4=exit\n\n");
        }
    }
}

// Note that the return statement is not followed by a break statement. A break statement immediately following a return can never be executed and many compilers will issue a warning message.
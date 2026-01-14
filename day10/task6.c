// 14 jan 2026

// "Task 40: Do-While – Menu Simulation
// Show a menu to the user.
// Ask the user to enter a choice.
// If the user enters 0, stop the program.
// Otherwise, show the menu again and again.
// Example :Menu:
// 1. Say Hello
// 2. Say Bye
// 0. Exit
// Enter your choice: 1
// Hello!
// Menu:
// 1. Say Hello
// 2. Say Bye
// 0. Exit
// Enter your choice: 0
// Exiting program...

#include<stdio.h>
int main()
{
    int i = 1, choice ;

    do
    {
        printf("\n\n\n Menu:");
        printf("\n 1. Say Hello");
        printf("\n 2. Say Bye");
        printf("\n 0. Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        printf("\n Hello...");
        break;

        case 2:
        printf("\n Bye....");
        break;

        case 0:
        printf("\n Exiting Program...");
        i = 0;
        break;

        default:
        printf("\n Enter valid choice !");
        break;
        }

    } while (i != 0);

    return 0;
}
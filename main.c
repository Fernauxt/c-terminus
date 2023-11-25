#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    char ch;

    do {
        system("cls");  // Clear the screen

        printf("\n\n\t\t====== Terminus ======\n\n\n");

        printf("\t\tWhat do you want to do with this pc?\n");
        printf("\t\t1. Shut 'em down.\n");
        printf("\t\t2. Need a reset, restart 'em.\n");
        printf("\t\t0. Never mind.\n");
        printf("\t\t....");
        scanf("%d", &n);

        switch (n) {
            case 1:
                system("cls");  // Clear the screen
                printf("Do you want to shutdown your pc (y/n)? ");
                scanf(" %c", &ch);
                if (ch == 'y' || ch == 'Y') {
                    printf("Shutting down in 30 seconds...\n");
                    system("C:\\WINDOWS\\System32\\shutdown /s /t 30");
                } else {
                    printf("Cancelled shutdown.\n");
                }
                break;

            case 2:
                system("cls");  // Clear the screen
                printf("Do you want to restart your pc (y/n)? ");
                scanf(" %c", &ch);
                if (ch == 'y' || ch == 'Y') {
                    printf("Restarting in 10 seconds...\n");
                    system("C:\\WINDOWS\\System32\\shutdown /r /t 10");
                } else {
                    printf("Cancelled restart.\n");
                }
                break;

            case 0:
                printf("\n\n\t\tNever mind. Exiting program.\n");
                break;

            default:
                system("cls");  // Clear the screen
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }

        if (n != 0) {
            system("pause");
        }

    } while (n != 0);

    return 0;
}


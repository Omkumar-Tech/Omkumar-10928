#include <stdio.h>

// Function declarations
void printNumbers(int n);
void printEven(int n);
void printOdd(int n);

int main() {
    int choice, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("\n----- MENU -----\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printNumbers(n);
            break;
        case 2:
            printEven(n);
            break;
        case 3:
            printOdd(n);
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}

// Function to print numbers from 1 to N
void printNumbers(int n) {
    int i;
    printf("\nNumbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

// Function to print even numbers up to N
void printEven(int n) {
    int i;
    printf("\nEven numbers up to %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}

// Function to print odd numbers up to N
void printOdd(int n) {
    int i;
    printf("\nOdd numbers up to %d:\n", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
}
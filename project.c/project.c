#include <stdio.h>

void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

void printEven(int n) {
    int i;
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
}

void printOdd(int n) {
    int i;
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
}

int main() {
    int choice, n;

    printf("\n--- Menu ---\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 4) {
        printf("Program exited.\n");
        return 0;
    }

    printf("Enter value of N: ");
    scanf("%d", &n);

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
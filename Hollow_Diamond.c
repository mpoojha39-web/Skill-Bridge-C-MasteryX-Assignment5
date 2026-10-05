#include <stdio.h>

int main() {
    int n, i, j, spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    /* Upper half */
    for (i = 1; i <= n; i++) {
        for (spaces = i; spaces < n; spaces++)
            printf(" ");

        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    /* Lower half */
    for (i = n - 1; i >= 1; i--) {
        for (spaces = i; spaces < n; spaces++)
            printf(" ");

        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, i, j, spaces;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    /* Upper half */
    for (i = n; i >= 1; i--) {
        for (spaces = n; spaces > i; spaces--)
            printf("  ");

        for (j = 1; j <= (2 * i - 1); j++)
            printf("* ");

        printf("\n");
    }

    /* Lower half */
    for (i = 2; i <= n; i++) {
        for (spaces = n; spaces > i; spaces--)
            printf("  ");

        for (j = 1; j <= (2 * i - 1); j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
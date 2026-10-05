#include <stdio.h>

int main() {
    int n, i, j, spaces;
    int value;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        for (spaces = 0; spaces < n - i - 1; spaces++)
            printf("   ");

        value = 1;

        for (j = 0; j <= i; j++) {
            printf("%6d", value);
            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
 {
    int i, j, n, k;
    scanf("%d", &n);

    int mid = (n / 2) + 1; // Calculate the middle row

    // Upper half including the middle row
    for(i = 1; i <= mid; i++) {
        // Print leading spaces
        for (j = mid - i; j > 0; j--) {
            printf(" ");
        }
        // Print stars
        for(k = 0; k < (2 * i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = mid - 1; i > 0; i--) {
        // Print leading spaces
        for (j = mid - i; j > 0; j--) {
            printf(" ");
        }
        // Print stars
        for(k = 0; k < (2 * i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

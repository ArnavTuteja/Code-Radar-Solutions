#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // Found a divisor, not prime
    }
    return 1; // Prime number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime");
    else
        printf("%Not Prime ");

    return 0;
}

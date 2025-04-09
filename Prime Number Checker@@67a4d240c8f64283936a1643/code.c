#include <stdio.h>

int isPrime(int num)
{
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
            return 0;
    }
    return 1;
}

int main() 
{
    int t;
    if (scanf("%d", &t) != 1) return 1; // Check if input is valid

    while (t--) {
        int num;
        if (scanf("%d", &num) != 1) return 1; // Check if input is valid
        printf("%d\n", isPrime(num));
    }

    return 0;
}


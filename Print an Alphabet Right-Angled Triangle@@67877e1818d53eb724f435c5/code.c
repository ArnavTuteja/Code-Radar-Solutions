#include<stdio.h>
int main()
{
    int n,i,j;
    char ch;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        char ch = 'A';  // Start with 'A' for each row
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;  // Move to the next letter
        }
        printf("\n");
    }
}


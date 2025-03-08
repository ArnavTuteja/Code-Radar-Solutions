#include<stdio.h>
int main()
{
    #include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Taking input: two integers and an operator
   
    scanf("%d %d %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("error\n"); // Handling division by zero
            break;
        default:
            printf("error\n"); // Invalid operator
    }

    return 0;
}

}
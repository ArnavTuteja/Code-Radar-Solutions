
    #include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Taking input: two integers and an operator
   
    scanf("%d %d %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            printf("%d", num1 + num2);
            break;
        case '-':
            printf("%d", num1 - num2);
            break;
        case '*':
            printf("%d", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d", num1 / num2);
            else
                printf("error"); // Handling division by zero
            break;
        default:
            printf("error"); // Invalid operator
    }

    return 0;
}


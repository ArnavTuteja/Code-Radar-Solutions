#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a>64 && a<91)
    {
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=199)
    {
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}
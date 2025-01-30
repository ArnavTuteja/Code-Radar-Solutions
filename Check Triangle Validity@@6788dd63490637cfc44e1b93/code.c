#include <stdio.h>

int main()
{
     int a,b,c,s1,s2,s3;
     scanf("%d %d %d",&a,&b,&c);
     if(a+b>c || b+c>a || a+c>b)
     {
        printf("Valid");
     }
     
    else
    {
        printf("Invalid"):
    }
}
#include <stdio.h>

int main()
{
     int a,b,c,s1,s2,s3;
     scanf("%d%d%d",&a,&b,&c);
     s1=a+b;
     s2=b+c;
     s3=a+c;
     if(s1>c || s2>a || s3>b)
     {
        printf("Valid");
     }
     
     else{
        printf("Invalid"):
     }
     }
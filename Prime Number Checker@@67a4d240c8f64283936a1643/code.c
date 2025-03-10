#include<stdio.h>
int isPrime(num)
{
int i,n,j;
for (j=1;j<=n;j++){
for(i=2;i<=num;i++)
{
    if(num%i==0)
    {
       return 0;
        break;
    }
    else
    {
        return 1;
    }
}}
}
#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for (j=n-1;j>0;j--)
        {
            printf(" ");
        }
        for(k=(2*i)-1;k>=0;k--)
        {
            printf("*");
        }
    }
}
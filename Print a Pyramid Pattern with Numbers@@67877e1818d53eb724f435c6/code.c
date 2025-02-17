#include<stdio.h>
int main()
{
    int i,n,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i-1;j>=1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
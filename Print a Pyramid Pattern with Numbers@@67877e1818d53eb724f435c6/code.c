#include<stdio.h>
int main()
{
    int i,n,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
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
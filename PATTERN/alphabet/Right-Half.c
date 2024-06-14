#include<stdio.h>
int main()
{
    int n=6;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(int k=65;k<=64+i;k++)
        {
            printf("%c ",k);
        }
        printf("\n");
    }
    return 0;
}
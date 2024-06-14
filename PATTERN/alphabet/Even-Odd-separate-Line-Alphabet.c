#include<stdio.h>
int main()
{
    /*
    int m=64,n;
    printf("Entert the number...");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        if(i%2==0)
        {
            for(int k=65;k<=64+i;k++)
            {
                printf("%c ",k);
            }
        }
        else
        {
            for(int l=m+i;l>=65;l--)
            {
                printf("%c ",l);
            }
        }
        printf("\n");
    }*/

    // for digit....
    int m=1,n;
    printf("Enter the number....");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        if(i%2==0)
        {
            for(int k=i;k>0;k--)
            {
                printf("%d ",k);
            }
        }
        else
        {
            for(int l=m;l<=i;l++)
            {
                printf("%d ",l);
            }
        }
        printf("\n");
    }
    return 0;
}
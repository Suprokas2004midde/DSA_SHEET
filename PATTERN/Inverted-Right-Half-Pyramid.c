#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for (int i=0;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
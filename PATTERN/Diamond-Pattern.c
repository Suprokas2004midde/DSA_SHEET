#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Number(Odd) of Row:..\n");
    scanf("%d",&a);
    c=a/2+1;
    for(int i=1;i<=a;i++)
    {
        if(i<=c)
        {
            //for spaceing...
            for(int j=c-i;j>0;j--)
            {
                printf("  ");
            }
            for(int k=1;k<=2*i-1;k++)
            {
                printf("* ");
            }
        }
        else
        {
            for(int j=1;j<=i-c;j++)
            {
                printf("  ");
            }
            for(int k=1;k<=2*(a-i)+1;k++)
            {
                printf("* ");
            }
        }

        printf("\n");
    }
    return 0;
}
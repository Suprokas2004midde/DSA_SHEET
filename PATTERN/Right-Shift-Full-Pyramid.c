#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the no. of Row(Odd):\n");
    scanf("%d",&a);
    b=a/2+1;
    for(int i=1;i<=a;i++)
    {
        if(i<=b)
        {
            for(int j=1;j<=i;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(int k=1;k<=a-i+1;k++)
            {
                printf("* ");
            }

        }
        printf("\n");   
    }
    return 0;
}
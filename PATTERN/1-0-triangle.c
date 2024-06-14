#include<stdio.h>
int main()
{
    int n,b,a,c;
    printf("Enter the No. of row:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        a=1;
        b=0;
        if(i%2==0)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",b);
                c=b;
                b=a;
                a=c;
            }
        }
        else
        {
            for(int k=1;k<=i;k++)
            {
                printf("%d ",a);
                c=a;a=b;b=c;
            }
        }
        printf("\n");
    }
    return 0;
}
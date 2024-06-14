#include<stdio.h>
int main()
{
    int n,a=1,b=1,sum;
    printf("Enter the size of fibonacci series:\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    printf("\nThe number is %d",sum);
    return 0;
}
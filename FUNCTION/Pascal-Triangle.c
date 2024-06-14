#include<stdio.h>
int fact(int a)
{
    int sum=1;
    for(int i=1;i<=a;i++)
    {
        sum=sum*i;
    }
    return sum;
}
int result(int a,int b)
{
    int result=fact(a)/(fact(b)*fact(a-b));
    return result;
}
int main()
{
    int n,ncr;
    printf("Enter the no. of Rows:\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int k=n-i;k>0;k--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            ncr=result(i,j);
            printf("%d ",ncr);
        }
        printf("\n");
    }
    return 0;
}
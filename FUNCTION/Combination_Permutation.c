#include<stdio.h>
int fact(int x)
{
    int sum=1;
    for(int i=1;i<=x;i++)
    {
        sum=sum*i;
    }
    return (sum);
}
int main()
{
    int n,r;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Enter the value of r:\n");
    scanf("%d",&r);
    int result= fact(n)/(fact(r)*fact(n-r));
    printf("The result is: %d",result);
    return 0;;
}
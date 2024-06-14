#include<stdio.h>
int main()
{
    int n,cpy,sum=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    cpy=n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) sum+=i;
    }
    if(cpy==sum) printf("This is a perfect number...");
    else printf("This is not a perfect number...");
    return 0;
}
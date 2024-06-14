#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a<2) printf("This is not a prime number....");
    for(i=2;i<a;i++)
    {
        b=a%i;
        if(b==0)
        {
            printf("This is not a prime number:");
            break;
        }
    }
    if(i==a)
    {
        printf("This is a prime number...");
    }
    return 0;
}
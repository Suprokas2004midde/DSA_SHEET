#include<stdio.h>
int main()
{
    int a,b,i;
    for(a=2;a<=300;a++)
    {
        for(i=2;i<=a;i++)
        {
            b=a%i;
            if(b==0) break; //thiis line checks if the remainder is 0 or not.... 
        }
        if(i==a) printf("%d ",a); //if reminder is zero then if, i and a are equal then a is prime number....
    }
    return 0;
}
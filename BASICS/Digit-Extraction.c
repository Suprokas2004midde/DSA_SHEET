// taake a number and sum it's digit with the help of c programming 
#include<stdio.h>
int main()
{
    int value,reverse=0,x=0;
    printf("Enter a 5 Digit number:\n");
    scanf("%d",&value);
    while(value!=0)
    {
        x=value%10;
        reverse=reverse+x;
        value=value/10;
    }
    printf("The sum of it's digit is:%d\n",reverse);
    return 0;
}
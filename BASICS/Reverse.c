#include<stdio.h>
int main()
{
    int number,remainder,reverse=0;//hhere we have give the value of reverse variable.
    printf("Enter the number:");
    scanf("%d",&number);
    while(number!=0)
    {
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
    printf("the reverse number is:%d",reverse);
    return 0;
}
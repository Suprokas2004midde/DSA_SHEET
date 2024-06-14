#include<stdio.h>
int main()
{
    int a=9,b=3;
    /*Method 1----------*/     //c;
    // c=b;
    // b=a;
    // a=c;
    // printf("The numbers are a=%d\n and b=%d",a,b);
    
    //method-2;

    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\nb=%d",a,b);
    return 0;
}
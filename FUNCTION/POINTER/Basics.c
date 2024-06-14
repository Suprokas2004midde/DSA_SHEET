#include<stdio.h>
int main()
{
    int x=5;
    int* a=&x;
    printf("%d\n",x);
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%p\n",*a);
    printf("%d",*a);
    printf("\n%p",a);
    return 0; 
}
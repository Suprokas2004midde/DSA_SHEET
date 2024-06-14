#include<stdio.h>
int main()
{
    int a=65;
    int b=97;
    while(a<=65+25)
    {
        printf("%d-%c\n",a,a);
        a++;
    }
    while(b<=97+25)
    {
        printf("%d-%c\n",b,b);
        b++;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i;
    while (i=10)  //as it is assign 10 to the i then,the loop will be an infinite loop.........
    {
        printf("%d\n",i);
        printf("Hellow\n");
        i=i+1;
    }
    
    return 0;
}
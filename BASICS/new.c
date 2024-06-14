#include<stdio.h>

int main()
{
    
   int first = 0, second = 1, next, n;

    printf("Enter the nth term: ");
    scanf("%d",&n);

    printf("The fibonacci series is: ");
    printf("%d %d ",first,second);

    for(int i = 3 ; i <= n; i++)
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;

    }
    return 0;
}
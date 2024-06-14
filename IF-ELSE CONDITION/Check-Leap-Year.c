#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year:\n");
    scanf("%d",&n);
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
                printf("Congratulations,it's a leap year...\n");
            else
                printf("it's not a leap year...\n");
        }
        else
            printf("It's a leap year...\n");
    }
    else
        printf("It's not a Leap year...");
    return 0;
}
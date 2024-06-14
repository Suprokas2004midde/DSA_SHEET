#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of sides:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c)
    {
        printf("It's a equilateral Triangle...\n");
    }
    else if(a==b || b==c || a==c)
    {
        printf("It's a isoscelene Triangle..\n");
    }
    else if (a!=b!=c)
    {
      if(c*c==(a*a+b*b))
        {
            printf("It's a right angle triangle..\n");
        }
        else
        {
          printf("It's a Scalene Triangle..\n");  
        }
    }
    return 0;
}
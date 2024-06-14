#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f;
    printf("Enter thhe values of A,B,C:\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b-4*a*c);
    e=(-b+sqrt(d))/2*a;
    f=(-b-sqrt(d))/2*a;
    printf("The value of Equation is:%f\n",e);
    printf("The value of Equation is:%f",f);
    return 0;
}
//Write a program to take a celcious value and converte it to fahrenheit value.....         
#include<stdio.h>
int main()
{
    float celcious,fahrenheit;
    printf("Enter the value of Celcious:");
    scanf("%f",&celcious);
    fahrenheit=((9*celcious)/5)+32;
    printf("The equivaalent Fahreheit tempareture is:%.2f",fahrenheit);
    return 0;
}
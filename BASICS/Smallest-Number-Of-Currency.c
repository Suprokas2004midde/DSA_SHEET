//There are 6 types of notes 1,2,5,10,50,100 Rs...etc. find smallest number of notes....
#include<stdio.h>
int main()
{
    int amount,total,one,two,five,ten,fifty,hundred;
    printf("Enter the value of Corrency:");
    scanf("%d",&amount);
    
    hundred=amount/100;
    amount=amount%100;
     
    fifty=amount/50;
    amount=amount%50;

    ten=amount/10;
    amount=amount%10;

    five=amount/5;
    amount=amount%5;

    two=amount/2;
    amount=amount%2;

    one=amount/1;

    total=hundred+fifty+ten+five+two+one;
    printf("Total Number of notes are:%d",total);
    
    return 0;
}
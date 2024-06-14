//page no.47(Let us c)
#include<stdio.h>
int main()
{
    int costprice,sellprice,profit,loss;
    printf("Enter the amount of cost and selling price:\n");
    scanf("%d%d",&costprice,&sellprice);
    if(costprice>=sellprice)
    {
        loss=costprice-sellprice;
        printf("This is loss sell and the loss is:%d",loss);
    }
    else 
    {
        profit=sellprice-costprice;
        printf("This is a profit sell and the profit is:%d",profit);
    }
    return 0;
}
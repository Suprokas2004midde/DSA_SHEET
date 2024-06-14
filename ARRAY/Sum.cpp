#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,3,4,5,6},sum=0,prod=1;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
        prod=prod*arr[i];
    }
    cout<<"The sum of the elements is:"<<sum<<endl;
    cout<<"The product of the elements is:"<<prod<<endl;
    return 0;
}
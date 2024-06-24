#include<iostream>
using namespace std;
int main()
{
    int arr[2]={1,9};
    int *ptr=&arr[0];
    cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl;
    cout<<*(ptr+1)<<" "<<*(arr+1)<<endl;
    return 0;
}
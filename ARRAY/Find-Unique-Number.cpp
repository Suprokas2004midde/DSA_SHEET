#include<iostream>
using namespace std;
int main()
{
    int arr[9]={1,2,3,5,5,4,3,2,1};
    int unique=0;
    for(int i=0;i<9;i++)
    {
        unique=unique^arr[i];
    }
    cout<<"The Unique Number is:  "<<unique<<endl;
    return 0;
}
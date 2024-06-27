#include<iostream>
using namespace std;
void function(int *arr,int size) //Passing the address to a pointer
{
    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<endl; // accessing the elements by pointer method........ 
    }
}
int main()
{
    int arr[3]={1,2,3};
    function(&arr[0],3); // Here we passing the first elements address....
    return 0;
}
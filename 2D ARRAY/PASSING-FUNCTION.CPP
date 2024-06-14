#include<iostream>
using namespace std;
const int c=5;//we have to declear the column numner in global variable...

void looping(int arr[][c],int r,int c) // Decleared column(in the global var.) and the column size in the function should be same...
{
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    return;
}
int main()
{
    int r;
    cout<<"Enter the size of Row & Column...: "<<endl;
    cin>>r;
    int arr[r][c];
    looping(arr,r,c);
    cout<<"The Elements of 2D Array's are: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
#include<iostream>
using namespace std;
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main()
{
    int n=7;
    int arr[n]={1,2,3,4,5,7,6};
    for(int i=0;i<=n-2;i++)
    {
        int check=0;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                check=1;
            }
        }
        print_array(arr,n);
        if(check==0) break;
    }
    return 0;
}
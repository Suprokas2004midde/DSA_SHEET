#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
//This code will not work for this (-10, -40, -25, -12, -25, -10)
//here Any change between largest and seclargest value willnot happens....
int Findsecondlargest(vector<int>&arr,int n)
{
    int largest=arr[0];
    int secondlargest=INT_MIN;
    if(n==1) return -1;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]>largest)
            {
                secondlargest=largest;
                largest=arr[i];
            }
            else if(arr[i]>secondlargest && arr[i]<largest) secondlargest=arr[i];
        }
    }
    if(secondlargest==INT_MIN) return -1;
    else  return secondlargest;
}
int main()
{
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        arr.push_back(value);
    }
    int x=Findsecondlargest(arr,n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    cout<<"The second largest element is: "<<x<<endl;
    return 0;
}
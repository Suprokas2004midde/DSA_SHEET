#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_value(vector<int>&arr, int k)
{
    vector<int>temp;
    int start=1;
    while(temp.size()<=k)
    {
        int flag=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==start) 
            {
                flag=1;
                break;
            }
        }
        if(flag==0) temp.push_back(start);
        start++;
    }
    int result=temp[k-1];
    return result;
}
int main()
{
    vector<int>arr={1,2,3,4};
    int k=2;
    int value=find_value(arr,k);
    cout<<"The kth missing number is: "<<value<<endl;
    return 0;
}
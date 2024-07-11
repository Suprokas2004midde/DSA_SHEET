#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findlength(vector<int>&nums,int k)
{
    int sum=0;
    int length=0;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i;j<nums.size();j++)
        {
            sum+=nums[j];
            if(sum==k) 
            {
                length=max(length,j-i+1);
            }
        }
    }
    return length;
}
int main()
{
    vector<int>nums={1,2,3,1,1,1,1,4,2,3};
    int k=3;
    int x=findlength(nums,k);
    cout<<"Longest Subarray is: "<<x<<endl;
    return 0;
}
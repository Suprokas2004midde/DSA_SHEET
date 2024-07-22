#include<iostream>
#include<vector>
using namespace std;
int find_length(vector<int>&nums)
{
    int n=nums.size();
    int max_len=0;
    for(int i=0;i<n;i++)
    {
        int sum=nums[i];
        for(int j=i+1;j<n;j++)
        {
            sum+=nums[j];
            if(sum==0)
            {
                int length=j-i+1;
                max_len=max(max_len,length);
            }
        }
    }
    return max_len;
}
int main()
{
    vector<int>nums={2,10,4};
    int x=find_length(nums);
    cout<<"the Longest subarray with k sum is: "<<x<<endl;
    return 0;
}
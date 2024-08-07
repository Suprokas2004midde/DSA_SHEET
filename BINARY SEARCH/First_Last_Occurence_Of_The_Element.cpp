#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Lower_index(vector<int>&nums,int target)
{
    int low=0;
    int high=nums.size()-1;
    int index=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target) 
        {
            index=mid;
            high=mid-1;
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return index;
}
int Upper_index(vector<int>&nums,int target)
{
    int low=0;
    int high=nums.size()-1;
    int index=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]==target) 
        {
            index=mid;
            low=mid+1;
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return index;
}
int main()
{
    vector<int>nums={2,1,2,4,4,8,8,10};
    int target=2;
    sort(nums.begin(),nums.end());
    vector<int>ans(2);
    ans[0]=Lower_index(nums,target);
    ans[1]=Upper_index(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
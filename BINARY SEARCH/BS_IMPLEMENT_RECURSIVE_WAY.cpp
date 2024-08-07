#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_value(vector<int>nums,int target,int low,int high)
{
    //To tackle the situation of overflow we can use the modified formula....
    //int mid= low + ((high-low) / 2);
    int mid=(low+high)/2;
    if(low>high) return -1;
    if(nums[mid]==target) return mid;
    //return function is importent,without it, it would't return any value to caller function...
    else if(nums[mid]>target) return find_value(nums,target,low,mid-1); 
    else return find_value(nums,target,mid+1,high);
}
int main()
{
    int target=9;
    vector<int>nums={2,3,12,5,6,4,1,8,9,3};
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int index=find_value(nums,target,0,nums.size()-1);
    cout<<index<<endl;
    return 0;
}
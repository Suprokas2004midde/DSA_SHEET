#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int find_Divisor(vector<int>&nums,int value)
{
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+= ceil((double)nums[i]/(double)value);
    }
    return sum;
}
int find_ans(vector<int>&nums,int threshold)
{
    int maxval=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        maxval=max(maxval,nums[i]);
    }
    
    //brute force
    // for(int i=1;i<=maxval;i++)
    // {
    //     int sum_of_divisor=find_Divisor(nums,i);
    //     if(sum_of_divisor<=threshold) ans=min(ans,i);
    // }

    //Optimal...
    int low=1,high=maxval;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int sum_of_divisor=find_Divisor(nums,mid);
        if(sum_of_divisor<=threshold) high=mid-1;
        else low=mid+1;
    }
    return low;
}
int main()
{
    vector<int>nums={44,22,33,11,1};
    int threshold=5;
    int ans=find_ans(nums,threshold);
    cout<<"The minimum Divisor is: "<<ans<<endl;
    return 0;
}
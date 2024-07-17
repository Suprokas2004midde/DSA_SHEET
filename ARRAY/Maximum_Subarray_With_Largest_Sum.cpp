#include<iostream>
#include<Vector>
using namespace std;
int Find_max_Subarray(vector<int>& nums)
{
    // Brute-Force Solution....
    // int last_sum=INT_MIN;
    // for(int i=0;i<nums.size();i++)
    // {
    //     int count=nums[i];
    //     for(int j=i+1;j<nums.size();j++)
    //     {
    //         count+=nums[j];
    //         if(count>last_sum) last_sum=count;
    //     }
    // }
    // return last_sum;


    //Kadane's Algorithhm....
    
    int Max_sum=INT_MIN;
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        if(Max_sum<sum) Max_sum=sum;
        if(sum<0) sum=0;
    }
    return Max_sum;


}
int main()
{
    vector<int>v={-2,-3,4,-1,-2,1,5,-3};
    int x=Find_max_Subarray(v);
    cout<<x<<endl;
    return 0;
}
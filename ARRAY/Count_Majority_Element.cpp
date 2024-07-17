#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int majority(vector<int>& nums)
{
    //BRUTE FORCE SOLUTION......Time Complexity:- O(n^2)......SpaceComplexity:-O(1);
    // int majorty_element=nums[0];
    // int majority_count=0;
    // for(int i=0;i<nums.size();i++)
    // {
    //     int count=1;
    //     for(int j=i+1;j<nums.size();j++)
    //     {
    //         if(nums[i]== nums[j]) count++;
    //     }
    //     if(majority_count<count) 
    //     {
    //         majorty_element=nums[i];
    //         majority_count=count;
    //     }
    // }
    // return majorty_element;
    int max_element=nums[0];
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>max_element) max_element=nums[i];
    }
    int arr[max_element]={0};
    for(int i=0;i<nums.size();i++)
    {
        arr[nums[i]]+=1;
    }
}
int main()
{
    vector<int>v={2,2,3,3,1,1,1,2,1};
    int x= majority(v);
    cout<<x<<endl;
    return 0;
}
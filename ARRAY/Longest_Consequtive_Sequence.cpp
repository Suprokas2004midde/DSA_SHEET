#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Find_lcs(vector<int>&nums) 
{
    sort(nums.begin(),nums.end());  //Time Complexity = O(n logn)..

    //Printing the elements..
    // for(int i=0;i<nums.size();i++)
    // {
    //     cout<<nums[i]<<" ";
    // }

    int longest=0;
    int size=1;
    for(int i=0;i<nums.size()-2;i++)  // Time complexity:- O(n)....
    {
        if(nums[i]==nums[i+1]-1)
        {
            size++;
            longest=max(longest,size);
        }
        else if(nums[i]!=nums[i+1]-1)
        {
            //longest=max(longest,size);
            size=1;
        }
    }
    cout<<size<<endl;
    return longest;
}
int main()
{
    // The overall time complexity is :- O(n logn)...
    vector<int> nums={100,4,101,102,4,201,200,1,3,2};
    int x=Find_lcs(nums);
    cout<<endl;
    cout<<"The longest consequtive Sequence is: "<<x<<endl;
    return 0;
}
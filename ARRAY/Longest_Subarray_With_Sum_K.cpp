//THIS IS A BRUTE FORCE SOLUTION WHERE WE TRAVERSE OVER THE ARRAY AND FIND ALL THE POSSIBLE SUB-ARRAY AND CHECK WHETHER
//IS IT SUM OF K OR NOT....
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int findlength(vector<int>&nums,int k)
{
    //BRUTE FORCE..... Time Complexity- O(n^2).......... Extra Space- O(1) 


    // int length=0;
    // for(int i=0;i<nums.size();i++)
    // {
    //     int sum=0;
    //     for(int j=i;j<nums.size();j++)
    //     {
    //         sum+=nums[j];
    //         if(sum==k) 
    //         {
    //             length=max(length,j-i+1);
    //             break;
    //         }
    //     }
    // }

    //BETTER USING HASHMAP....
    map<int,int>mpp;
    int sum=0,max_length=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        if(sum == k) max_length= max (max_length, i+1);

        int rem=sum-k;
        if(mpp.find(rem)!=mpp.end())
        {
            int len=i-mpp[rem];
            max_length= max (max_length, len);
        }
        //Here if we simply update thhe sum in every index without checking the it can make error in zero based elements... 
        //So, check the sum if it is already present in the array or not... 
        //mpp[sum]=i;
        if(mpp.find(sum)==mpp.end())
        {
            mpp[sum]=i;
        }
    }
    return max_length;
}
int main()
{
    //vector<int>nums={1,2,3,1,1,1,1,4,2,3}; //test case for above zero elements...
    vector<int>nums={2,0,0,3}; //Edge test case positive number including zero...
    int k=3;
    int x=findlength(nums,k);
    cout<<"Longest Subarray is: "<<x<<endl;
    return 0;
}
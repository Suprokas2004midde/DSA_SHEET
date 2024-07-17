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


    //BETTER USING HASHMAP.... Time Complexity:- O(n logn).....Extra space:-O(n)....


    // map<int,int>mpp;
    // int sum=0,max_length=0;
    // for(int i=0;i<nums.size();i++)
    // {
    //     sum+=nums[i];
    //     if(sum == k) max_length= max (max_length, i+1);

    //     int rem=sum-k;
    //     if(mpp.find(rem)!=mpp.end()) //Time complexity of find function is....Time Complexity:-O(log n)...
    //     {
    //         int len=i-mpp[rem];
    //         max_length= max (max_length, len);
    //     }
    //     //Here if we simply update thhe sum in every index without checking the it can make error in zero based elements... 
    //     //So, check the sum if it is already present in the array or not... 
    //     //mpp[sum]=i;
    //     if(mpp.find(sum)==mpp.end())
    //     {
    //         mpp[sum]=i;
    //     }
    // }


    //OPTIMAL APPROACH (ONLY APPLICABLE FOR POSITIVE ELEMENTS WITH ZERO)  Time Complexity:-.....O(n) ....Space Complexity:-O(1).....
    int i=0,j=0;
    int max_length=0;
    int sum=nums[0];
    while(i<nums.size() && j<nums.size())
    {
        if(sum>k)
        {
            sum-=nums[i];
            i++;
        }
        if(sum==k) //If we Chheck thhis condition in last position the value of j would go to nums.size() position so,we might get an error
        {          //    Thats why we have to check it before increment of j in last position...
            int len=j-i+1;
            max_length=max(max_length,len);
        }
        if(sum<=k)
        {
            j++;
            if(j<nums.size())
            {
                sum+=nums[j];
            }
        }
    }
    return max_length;
}
int main()
{
    vector<int>nums={1,2,3,1,1,1,1,4,2,3}; //test case for above zero elements...
    //vector<int>nums={2,0,0,3}; //Edge test case positive number including zero...
    int k=4;
    int x=findlength(nums,k);
    cout<<"Longest Subarray is: "<<x<<endl;
    return 0;
}
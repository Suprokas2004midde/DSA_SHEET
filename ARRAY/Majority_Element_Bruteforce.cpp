#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    vector<int>nums={2,2,2,3,3,1,1,1};

    //BETTER..
    
    int n=nums.size();
    map<int ,int>mpp;
    for(int i=0;i<nums.size();i++) //Time Complexity:- O(n)
    {
        mpp[nums[i]]+=1;
    }
    for(auto it:mpp)    //Time Complexity:- O(n)
    {
        if(it.second>(n/3))
        {
            cout<<it.first<<" ";
        }
    }


    //BRUTE fORCE....

    // vector<int>result; //Space Complexity:-O(1)... Constant space taken...
    // int n=nums.size(); 
    // for(int i=0;i<n;i++)  //Time Complexity:- O(n)
    // {
    //     int count=1;
    //     for(int j=i+1;j<n;j++)  //Time Complexity:- O(n)
    //     {
    //         if(nums[i]==nums[j]) 
    //         count++;
    //     }
    //     if(count>(n/3)) 
    //     {
    //         result.push_back(nums[i]);
    //         if(result.size()==2)
    //         break;
    //     }
    // }
    // cout<<"The majority Elements are: "<<endl;
    // for(int i=0;i<result.size();i++)
    // {
    //     cout<<result[i]<<" ";
    // }
    return 0;
}
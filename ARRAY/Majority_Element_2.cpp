#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>nums={2,1,1,3,1,2,2,6};
    int count1=0,count2=0;
    int el1,el2;
    for(int i=0;i<nums.size();i++)
    {
        if(count1==0 && nums[i]!=el2) 
        {
            count1++;
            el1=nums[i];
        }
        else if(count2==0 && nums[i]!=el1)
        {
            count2++;
            el2=nums[i];
        }
        else if(el1==nums[i]) count1++;
        else if(el2==nums[i]) count2++;
        else
        {
            count1--;
            count2--;
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==el1) sum1++;
        else if(nums[i]==el2) sum2++;
    }
    if(sum1>(nums.size()/3))
    cout<<el1<<" ";
    if(sum2>(nums.size()/3))
    cout<<el2<<endl;
    return 0;
}
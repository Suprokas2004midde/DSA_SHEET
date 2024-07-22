#include<iostream>
#include<vector>
using namespace std;
void Find_leader(vector<int>& nums,vector<int>& answer)
{
    int n=nums.size();
    int lastleader=nums[n-1];
    answer.push_back(lastleader);
    for(int i=n-2;i>=0;i--)
    {
        int flag=0;
        for(int j=i+1;j<n;j++)
        {
            if (nums[i]<nums[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0) 
        {
            answer.push_back(nums[i]);
            lastleader=nums[i];
        }
    }
}
int main()
{
    vector<int>nums={16,17,4,3,5,2};
    vector<int>answer;
    Find_leader(nums,answer);
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int Count_subarray(vector<int> &nums,int k)
{
    int max_count=0;
    vector<vector<int>> lists;
    for(int i=0;i<nums.size();i++)
    {
        int Count_xor=0;
        vector<int>temp;
        for(int j=i;j<nums.size();j++)
        {
            Count_xor=Count_xor^nums[j];
            temp.push_back(nums[j]);
            if(Count_xor==k)
            {
                max_count++;
                lists.push_back(temp);
            }
        }
        temp.clear();
    }
    for(const auto&row:lists)
    {
        for(const auto&element:row)
        {
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return max_count;
}
int main()
{
    vector<int> nums={4,2,2,6,4};
    int target=6;
    int x=Count_subarray(nums,target);
    cout<<x<<endl;
    return 0;
}
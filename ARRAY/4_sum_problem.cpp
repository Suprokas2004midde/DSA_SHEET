#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>nums={1,0,-1,0,-2,2};
    int target=0;
    
    set<vector<int>> hashset;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            for(int k=j+1;k<nums.size();k++)
            {
                for(int l=k+1;l<nums.size();l++)
                {
                    if(nums[i]+nums[j]+nums[k]+nums[l]==target)
                    {
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        hashset.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(hashset.begin(),hashset.end());
    for (const auto& row : ans) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
        }
    return 0;
}
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
//Overall Time complexity...O(n^3 * log n)
//Overall Space Complexity:- O(n)+ O(No. of Quads..)+ {O(3) it can be consider as constant space}...
int main()
{
    vector<int>nums={1,0,-1,0,-2,2};
    int target=0;
    
    set<vector<int>> hashset;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            set<int>temp_set; //Using a temporary set to store elements between j and k...
            for(int k=j+1;k<nums.size();k++)
            {
               int l=target-(nums[i]+nums[j]+nums[k]); // Find the last number using (target- sum of 3 elements)...
               if(temp_set.find(l)!=temp_set.end()) //find the last number using .find() function...
               {
                    vector<int>temp_num={nums[i],nums[j],nums[k],l}; // if the l is found then pushh it to a vector..
                    sort(temp_num.begin(),temp_num.end()); //sorting the vector...(to remove duplicates)...
                    hashset.insert(temp_num); //push it into the set...
               }
               temp_set.insert(nums[k]);//atlast, insert the elemment... into the temporary set... 
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
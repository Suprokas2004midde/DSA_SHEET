 /*
    (Optimal) Intution...
     
        1. Check out from last if there is any element is smaller than the previous one....
        2. Store the index and element.....
        3. Check from last if there is any element greater than the Stored_Element (But it has to be least minimum)
        4. Swap it with the stored element..
        5. Then reverse the rest of element ... 
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void next_permutation(vector<int>& nums)
{
    int index=-1;
    //Checking the dip of number..
    for(int i=nums.size()-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            index=i;
            break;
        }
    }
    for(int i=nums.size()-1;i>index;i--)
    {
        if(nums[i]>nums[index])
        {
            swap(nums[index],nums[i]);
            break;
        }
    }
    reverse(nums.begin()+(index+1),nums.end());
}
int main()
{
    vector<int>nums={2,1,5,4,3,0,0};
    next_permutation(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int max_product(vector<int>&nums) //Brute Force:- Time Complexity:- O(n^2)...Space Complexity:- O(1)...
{
    int n=nums.size();
    int count=0;
    int maxprod=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int product=nums[i];
        maxprod=max(maxprod,product);
        for(int j=i+1;j<n;j++)
        {
            product=product*nums[j];
            maxprod=max(maxprod,product);
        }
    }
    return maxprod;
}
int main()
{
    vector<int>nums={-2,0,-1};
    int x=max_product(nums);
    cout<<x<<endl;
    return 0;

}
#include<iostream>
#include<vector>
using namespace std;
void Re_arrange(vector<int>&nums)
{
    vector<int>positive_nums;
    vector<int>negetive_nums;


    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>0) 
            positive_nums.push_back(nums[i]);
        else
            negetive_nums.push_back(nums[i]);
    }


    int p_pointer =0;
    int N_pointer=0;
    
    for(int i=0;i<nums.size();i++)
    {
        if(p_pointer<positive_nums.size() && N_pointer<negetive_nums.size())
        {
            if(i==0 || i%2==0) 
            {
                nums[i]= positive_nums[p_pointer];
                p_pointer++;
            }
            else 
            {
                nums[i]=negetive_nums[N_pointer];
                N_pointer++;
            }
        }
        else if(N_pointer>=negetive_nums.size())
        {
            nums[i]=positive_nums[p_pointer];
            p_pointer++;
        }
        else if(p_pointer>=positive_nums.size())
        {
            nums[i]=negetive_nums[N_pointer];
            N_pointer++;
        }
    }

    //Optimal 
}
int main()
{
    vector<int>nums={8,3,1,-2,10,-5,2,-4,9};
    Re_arrange(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Overall Time Complexity:- O(n+m)+ O(n+m)...
//Overall Space Complexity:- O(n+m)...

void merge(vector<int>&nums1,int n1,vector<int>&nums2,int n2)
{
    int len=n1+n2;
    int gap=(len/2)+(len%2);
    while(gap>0)
    {
        int left=0;
        int right=left+gap;
        while(right<len)
        {
            if(left<n1 && right>=n1)
            {
                if(nums1[left]>nums2[right-n1])
                {
                    swap(nums1[left],nums2[right-n1]);
                }
            }
            else if(left>=n1)
            {
                if(nums2[left-n1]>nums2[right-n1])
                {
                    swap(nums2[left-n1],nums2[right-n1]);
                }
            }
            else
            {
                if(nums1[left]>nums1[right])
                {
                    swap(nums1[left],nums1[right]);
                }
            }
            left++,right++;
        }
        if(gap==1) return;
        else gap=(gap/2)+(gap%2);
    }





    //Optimal Approach 1.....
    // int right=0,left=n1-1;
    //     while(left>=0 && right<n2) //Time complexity:- O(min(n1,n2)) + O(n log n) + O(m log m) + O(m)....
    //     {
    //         if(nums1[left]>nums2[right])
    //         {
    //             swap(nums1[left],nums2[right]); 
    //             left--,right++;
    //         }
    //         else
    //         {
    //             break;
    //         }
            
    //     }
    //     sort(nums1.begin(),nums1.begin()+n1);
    //     sort(nums2.begin(),nums2.end());
    //     for(int i=0;i<n2;i++)
    //     {
    //         nums1[n1+i]=nums2[i];
    //     }


        
    //brute force

    // vector<int>temp; //space O(n+m)...
    //     int left=0,right=0;
    //     while(left<n1 && right<n2) //time complexity:- O(n+m)...
    //     {
    //         if(nums1[left]<=nums2[right])
    //         {
    //             temp.push_back(nums1[left]);
    //             left++;
    //         }
    //         else
    //         {
    //             temp.push_back(nums2[right]);
    //             right++;
    //         }
    //     }
    //     while(right<n2)
    //     {
    //         temp.push_back(nums2[right]);
    //         right++;
    //     }
    //     while(left<n1)
    //     {
    //         temp.push_back(nums1[left]);
    //         left++;
    //     }
    //     for(int i=0;i<(n1+n2);i++) //time complexity:- O(n+m)
    //     {
    //         nums1[i]=temp[i];
    //     }
}
int main()
{
    int n1=4,n2=4;
    vector<int>nums1={18,3,1,9};
    sort(nums1.begin(),nums1.begin()+3);
    vector<int>nums2={2,5,6,0};
    sort(nums2.begin(),nums2.end());
    merge(nums1,n1,nums2,n2);
    for(int i=0;i<n1;i++)
    {
        cout<<nums1[i]<<" ";
    }
    for(int i=0;i<n2;i++)
    {
        cout<<nums2[i]<<" ";
    }
    return 0;
}
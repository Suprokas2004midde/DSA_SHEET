#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_element(vector<int>&arr3,int k)
{
    int ans=arr3[k-1];
    return ans;
}
void merge_array(vector<int>&arr1, vector<int>&arr2, vector<int>&arr3)
{
    int i=0,j=0;
    int n1=arr1.size();
    int n2=arr2.size();
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else 
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1)
    {
        arr3.push_back(arr1[i]);
        i++;
    }
    while(j<n2)
    {
        arr3.push_back(arr2[j]);
        j++;
    }
}
int main()
{
    //Overall Time Complexity:- O(n1+n2)...
    //Overall Space complexity:- O(n1+n2)...
    vector<int>arr1={100, 112, 256, 349, 770};
    vector<int>arr2={72, 86, 113, 119, 265, 445, 892};
    int k=7;
    vector<int>arr3;
    merge_array(arr1,arr2,arr3);
    int ans=find_element(arr3,k);
    cout<<"The "<<k<<"th element of the sorted array is: "<<ans<<endl;
    return 0;
}
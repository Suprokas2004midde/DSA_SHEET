#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge_array(vector<int>&arr1,vector<int>&arr2,vector<int>&arr3) //O(n1+n2)...
{
    int i=0,j=0;
    int n1=arr1.size();
    int n2=arr2.size();
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
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
    return;
}
double find_median(vector<int>&arr3)
{
    int size=arr3.size();
    if(size%2==1)
    {
        return arr3[size/2];
    }
    else 
    {
        return (double)((double) arr3[size/2] +  (double) arr3[(size/2)-1])/2.0;
    }
}
int main()
{
    //Overall Time Complexity:- O(n1+n2)...
    //Overall space Compleexity:- O(n1+n2)...
    vector<int>arr1={1,3,5,6,7,9};
    vector<int>arr2={2,3,6,10};
    vector<int>arr3;
    merge_array(arr1,arr2,arr3);
    double ans=find_median(arr3);
    cout<<"The median of two sorted aray is: "<<ans<<endl;
    return 0;
}
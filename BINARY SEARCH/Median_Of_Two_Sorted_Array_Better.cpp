#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
double find_median(vector<int>&arr1,vector<int>&arr2)
{
    int n1=arr1.size();
    int n2=arr2.size();
    int n=n1+n2;
    int indx1=(n/2);
    int indx2=(n/2)-1;
    int indelm1=-1,indelm2=-1;
    int i=0,j=0,count=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            if(count==indx1) indelm1=arr1[i];
            if(count==indx2) indelm2=arr1[i];
            count++;
            i++;
        }
        else 
        {
            if(count==indx1) indelm1=arr2[j];
            if(count==indx2) indelm2=arr2[j];
            count++;
            j++;
        }
    }
    while(i<n1)
    {
        if(count==indx1) indelm1=arr1[i];
        if(count==indx2) indelm2=arr1[i];       
        count++;
        i++;      
    }
    while(j<n2)
    {
        if(count==indx1) indelm1=arr2[j];
        if(count==indx2) indelm2=arr2[j];
        count++;
        j++;       
    }
    if(n%2==1)
    {
        return indelm1;
    }
    else  return (double)((double)indelm1 + (double)indelm2)/2.0;
}
int main()
{
    //The overall time Complexity:- O(n1+n2)...
    //The overall Space Complexity:- O(1)...
    vector<int>arr1={1,3,5,6,7,9};
    vector<int>arr2={2,3,6,10};
    double ans=find_median(arr1,arr2);
    cout<<"The median of two index is: "<<ans<<endl;
    return 0;
}
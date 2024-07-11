#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingnumber(int arr[],int size)
{ 
    //BRUTE FORCE SOLUTION
    //Time Complexity= O(n*n);
    //Extra Space = O(n+1);
    // int mainsize=size+1;
    // int missingnumber=-1;
    // int element=-1;
    // int temp[mainsize]={0,1,2,3,4};
    // for(int i=0;i<mainsize;i++)
    // {
    //     temp[i]=i;
    // }
    // for(int i=0;i<mainsize;i++)
    // {
    //     for(int j=0;j<size;j++)
    //     {
    //         if(temp[i]==arr[j])
    //         {
    //             missingnumber=-1;
    //             break;
    //         }
    //         else missingnumber = 0;
    //     }
    //     if(missingnumber==0) 
    //     {
    //         element=i;
    //         break;
    //     }
    // }
    // return element;


    //Better
    //Time Complexity=O(n)+O(n);
    // Extra Space= O(n+1);
    int hash[size+1]={0};
    int element=-1;
    for(int i=0;i<size;i++)
    {
        hash[arr[i]]=1;
    }
    for(int i=0;i<size+1;i++)
    {
        if(hash[i]==0)
        {
            element=i;
        }
    }
    return element;
    
}
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int number=missingnumber(nums,n);
    cout<<number<<endl;
    return 0;
}
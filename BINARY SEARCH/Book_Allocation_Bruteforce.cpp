#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_student(vector<int>&pages,int page_value)
{
    int count=1,sum=0;
    for(int i=0;i<pages.size();i++)
    {
        // sum+=pages[i];
        // if(sum>page_value) 
        // {
        //     count++;
        //     sum=pages[i];
        // }
        // else continue;
        if(sum+pages[i]<=page_value)
        {
            sum+=pages[i];
        }
        else 
        {
            count++;
            sum=pages[i];
        }
    }
    return count;
}
int find_pages(vector<int>&pages,int m)
{
    int max_val=INT_MIN,sum=0;
    for(int i=0;i<pages.size();i++)
    {
        max_val=max(max_val,pages[i]);
        sum+=pages[i];
    }
   int low=max_val,high=sum,ans=sum;
   while(low<=high)
   {
        int mid=low+(high-low)/2;
        int count=find_student(pages,mid);
        if(count>m) low=mid+1;
        else  
        {
            ans=min(ans,mid);
            high=mid-1;
        }
        
   }
   return low;
}
// int find_pages(vector<int>&pages,int m)
// {
//     int max_val=INT_MIN,sum=0;
//     for(int i=0;i<pages.size();i++)
//     {
//         max_val=max(max_val,pages[i]);
//         sum+=pages[i];
//     }
    
//     for(int i=max_val;i<=sum;i++)
//     {
//         int count=find_student(pages,i);
//         if(count==m) return i;
//     }
//     return -1;
// }
int main()
{
    vector<int>pages={25, 46, 28, 49, 24};
    int m=4;
    int ans=find_pages(pages,m);
    cout<<"the maximum number of pages assigned to a student is minimum:- "<<ans<<endl;
    return 0;
}
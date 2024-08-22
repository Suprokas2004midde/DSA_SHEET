#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int find_days(vector<int>weights,int capacity) //Time Complexity:- O(n)
{
    int day=1;int sum=0;
    for(int i=0;i<weights.size();i++)
    {
        //sum+=weights[i]    countered an error...
        if(sum+weights[i]>capacity) 
        {
            day++;
            sum=weights[i];
        }
        else sum+=weights[i];
    }
    return day;
}
int find_cap(vector<int>weights,int days)
{
    //first we have to find the range of capacity.... 1.min 2.max
    int max_val=INT_MIN,sum=0;
    for(int i=0;i<weights.size();i++) //Time Complexity:- O(n)...
    {
        sum+=weights[i];
        if(max_val<weights[i]) max_val=weights[i];
    }
    //found the range from the previous loop...
    
    int low=max_val,high=sum,ans=sum;
    //brute force (lenier search)...Time Complexity:- O(X)
    // for(int i=low;i<=high;i++)
    // {
    //     int day=find_days(weights,i);
    //     cout<<i<<"th capacity= "<<day<<"days"<<endl;
    //     if(day<=days)  ans= min(i,ans);
    // }
    // return ans;
    while(low<=high) //Time Complexity::- O(log X)....
    {
        int mid=low+(high-low)/2;
        int day=find_days(weights,mid);
        if(day<=days)
        {
            ans=min(mid,ans);
            high=mid-1;
        }
        else low=mid+1;
    }
    return low;
}
int main()
{
    //The Avg Time Complexity:(Brute Force):- O(n)+ O(X*n) Where, X is the range of (Max-Sum).... 
    //The Avg Time Complexity:- (Optimal):- O(n)+O(logX*n)...
    //The Space Complexity:- O(1)....
    vector<int>weights={3,2,2,4,1,4};
    int days=3;
    int least_cap=find_cap(weights,days);
    cout<<"The minimum capacity to ship the packages within "<<days<<" days is: "<<least_cap<<endl;
    return 0;
}
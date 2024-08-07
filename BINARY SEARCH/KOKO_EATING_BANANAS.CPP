#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath> //for acccesing ceil and floor function....
using namespace std;
int find_max(vector<int>&piles)
{
    int max=INT_MIN;
    for(int i=0;i<piles.size();i++)
    {
        if(max<piles[i]) max=piles[i];
    }
    return max;
}
int find_hour(vector<int>&piles,int speed)
{
    int totalhour=0;
    for(int i=0;i<piles.size();i++)
    {
        totalhour+= ceil((double)piles[i]/(double)speed);
    }
    cout<<totalhour<<endl;
    return totalhour;
}
//brute force
// int find_k(vector<int>& piles, int h)
// {
//     int maximum=find_max(piles);
//     for(int i=1;i<=maximum;i++)
//     {
//         int hour= find_hour(piles,i);
//         if(hour>h) continue;
//         else if(hour==h)
//         { 
//             maximum=min(maximum,i);
//             break;
//         }
//         else break;
//     }
//     return maximum;
// }
int find_k(vector<int>& piles, int h)
{
    int maximum=find_max(piles);
    int ans=maximum;
    int low=1,high=maximum;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int hour=find_hour(piles,mid);
        if(hour<h) 
        {
            ans=min(ans,mid);
            high=mid-1; //because we have to return the minimum possible integer....(mid increases then the value of hour will decrease)
        }
        else if(hour==h) 
        {
            ans=min(ans,mid);
            break;
        }
        else low=mid+1;
    }

    return ans;
}
int main()
{
    vector<int>piles={30,11,23,4,20};
    int h=6;
    int x=find_k(piles,h);
    cout<<"The minimum speed of eating is : "<<x<<"/hour"<<endl;
    return 0;
}
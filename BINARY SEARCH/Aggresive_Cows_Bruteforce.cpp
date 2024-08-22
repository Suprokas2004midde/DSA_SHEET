#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool find_possible(vector<int>&stall,int distance,int k)
{
    int mark=0,count=1;
    for(int i=1;i<stall.size();i++) // Time Complexity:- O(n)...
    {
        if(stall[i]-stall[mark]>=distance)
        {
            mark=i,count++;
        }
        if(count==k) break; 
    }
    if(count==k) return true;
    else return false;
}
int find_max_distance(vector<int>&stall, int k)
{
    sort(stall.begin(),stall.end());
    int max_val=INT_MIN;
    for(int i=0;i<stall.size();i++) // Time Complexity:- O(n)
    {
        if(max_val<stall[i]) max_val=stall[i];
    }

    //linear Search Implementation...
    int ans=0;
    for(int i=1;i<=max_val;i++) // Time Complexity:- O(n)...
    {
        bool possible=find_possible(stall,i,k);
        if(possible==true) ans=max(ans,i);
        else break;
    }
    return ans;
}
int main()
{
    // The Avg time complexity:- O(n) + O( max_value * n)....

    vector<int>stall={4,2,1,3,6};
    int k=2;
    int ans=find_max_distance(stall,k);
    cout<<"The maximum possible minimum distance between two cows is: "<<ans<<endl;
    return 0;
}
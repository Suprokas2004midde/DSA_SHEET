#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<climits>
using namespace std;
int find_min(vector<int>& bloomdays)
{
    int min=INT_MAX;
    for(int i=0;i<bloomdays.size();i++)
    {
        if(min>bloomdays[i]) min=bloomdays[i];
    }
    return min;
}
int find_max(vector<int>& bloomdays)
{
    int max=INT_MIN;
    for(int i=0;i<bloomdays.size();i++)
    {
        if(max<bloomdays[i]) max=bloomdays[i];
    }
    return max;
}

bool possible(vector<int>& bloomdays,int days,int m,int k)
{
    int count=0,possible=0;
    for(int i=0;i<bloomdays.size();i++)
    {
        if(bloomdays[i]<=days) 
        {
            count++;
            if(count==k) 
            {
                possible++;
                count=0;
            }
        }
        else
        {
            count=0;
        }
    }
    if(possible>=m) return true;
    else return false;
}
int find_days(vector<int>&bloomdays,int m,int k)
{
    int n=bloomdays.size();
    long long val= m*1ll*k*1ll;
    if(val>n) return -1;
    int minval=find_min(bloomdays);
    int maxval=find_max(bloomdays);
    //brute force
    // for(int i=minval;i<=maxval;i++)
    // {
    //     if(possible(bloomdays,i,m,k)==true) return i;
    // }
    // return-1;

    //better
    int low=minval,high=maxval;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(possible(bloomdays,mid,m,k)==true)
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main()
{
    vector<int>bloomdays={7,7,7,7,12,7,7};
    int m=2,k=3;
    int days= find_days(bloomdays,m,k);
    cout<<"The minimum days to make a bouquet is: "<<days<<endl;
    return 0;
}

// #include<iostream>
// #include<vector>
// #include<cmath>
// #include<algorithm>
// #include<climits>
// using namespace std;

// int find_min(vector<int>& bloomdays)
// {
//     int min=INT_MAX;
//     for(int i=0;i<bloomdays.size();i++)
//     {
//         if(min>bloomdays[i]) min=bloomdays[i];
//     }
//     return min;
// }

// int find_max(vector<int>& bloomdays)
// {
//     int max=INT_MIN;
//     for(int i=0;i<bloomdays.size();i++)
//     {
//         if(max<bloomdays[i]) max=bloomdays[i];
//     }
//     return max;
// }

// bool possible(vector<int> bloomday, int days, int m, int k)
// {
//     int count = 0, possible = 0;
//     for (int i = 0; i < bloomday.size(); i++)
//     {
//         if (bloomday[i] <= days) 
//         {
//             count++;
//             if (count == k) 
//             {
//                 possible++;
//                 count = 0;
//             }
//         }
//         else 
//         {
//             count = 0;
//         }
//     }
//     if (possible >= m) 
//         return true;
//     else 
//         return false;
// }


// int find_days(vector<int>& bloomdays, int m, int k)
// {
//     if(bloomdays.size() < (m * k)) return -1;
//     int minval = find_min(bloomdays);
//     int maxval = find_max(bloomdays);
    
//     for(int i = minval; i <= maxval; i++)
//     {
//         if(possible(bloomdays, i, m, k) == true) return i;
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> bloomdays = {1, 10, 3, 10, 9, 2};
//     int m = 2, k = 2;
//     int days = find_days(bloomdays, m, k);
//     cout << "The minimum days to make a bouquet is: " << days << endl;
//     return 0;
// }

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
double Find_sqfloor(long long int n)
{
    /*
    It is determines through inbuilt sqrt function....
    int ans=sqrt(n);
    */

/*  here sqrt is determines through Linear search...  Time Complexity:- O(n)
    long long int ans=1;
    for(int i=1;i<=n;i++)
    {
        if(i*i<=n) ans=i;
        else break;
    }
    return ans;
*/

    //Using binary search.... Time Complexity:- O(log n)

    double low=1,high=n;
    double ans=1;
    while (low<=high)
    {
        double mid=(low+high)/2;
        if(mid*mid>n) 
        {
            high=mid-1;
        }
        else 
        {
            ans=mid;
            low=mid+1;
        }
    }
    return ans;
    

}
int main()
{
    double n;
    cin>>n;
    double ans=Find_sqfloor(n);
    cout<<"The Floor of sqrt element is:"<< ans<<endl;
    return 0;
}
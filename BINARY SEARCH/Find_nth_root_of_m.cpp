#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
double find_root(double n,double m)
{
    double ans=-1;
    for(double i=1;i<m;i++)
    {
        int count=1;
        double temp=1;
        while (count<=n)
        {
            temp=temp*i;
            count++;
        }
        if(temp<m) continue;
        else if(temp==m) ans=i;
        else break;
    }
    return ans;
}
int main()
{
    double n,m;
    cout<<"Enter the value of n and m respectively:- "<<endl;
    cin>>n>>m;

    double ans=find_root(n,m);
    cout<<"The nth root of m is:- "<<ans;
    return 0;
}
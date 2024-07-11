#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> num;
    num.push_back(5);
    num.push_back(6);
    num.push_back(2);
    num.push_back(3);
    num.push_back(7);
    num.push_back(9);

    //Initializing iterator for particular this vector....
    vector<int>::iterator itr=num.begin();


    for(itr;itr!=num.end();itr++)
    {
        cout<<*(itr)<<" ";
    }
    cout<<endl;


    for(auto it=num.begin();it!=num.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;


    for(auto it1:num)
    {
        cout<<it1<<" ";
    }
    cout<<endl;


    return 0;
}
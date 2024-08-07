#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>temp(3);
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    cout <<endl;
    cout<<temp.size()<<endl;
    temp.push_back(50);
    temp.push_back(9);
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    cout<<temp.size()<<endl;
    return 0;
}
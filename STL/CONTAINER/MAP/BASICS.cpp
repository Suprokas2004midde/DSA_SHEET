#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    map<int,int>mpp; //ByDefault, it stores in ascending order...
    //map<int,int,greater<int>>mpp; //This will stores value in descending order.....
    mpp[1]=3;
    mpp.emplace(2,3);
    mpp.insert(make_pair(4,2)); // Duplicate key is INVALID in map;
    mpp[2]=5;  //But, Duplicate values can be present .....it overwrites the key's value....
    cout<<mpp[2]<<endl;
    cout<<mpp.size()<<endl;
    mpp.insert(make_pair(5,46));
    mpp.insert(make_pair(6,11));
    mpp.insert(make_pair(7,2));
    auto it=mpp.find(6);
    //cout<<it;
    for(auto element:mpp)
    {
        cout<<"key: "<<element.first<<endl;
        cout<<"value: "<<element.second<<endl;
    }
    return 0;
}
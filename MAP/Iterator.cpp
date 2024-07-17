#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int>mpp; // Will Return the keys in unsorted way.... 
    mpp[2]=4;
    mpp[6]=9;
    mpp[1]=5;
    mpp[8]=3;
    for(auto it:mpp) // Syntax:-  (auto Any_Name:Map_Name)
    {
        //To access write, it.first....it.second.... 
        //Not Map_Name.first........Map_Name.second....(Generate an error)
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}
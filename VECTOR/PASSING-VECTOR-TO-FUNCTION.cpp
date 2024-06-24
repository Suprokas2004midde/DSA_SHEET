#include<iostream>
#include<vector>
using namespace std;
//void function(vector<int>n) it represents the PASS BY VALUE  method......
void function(vector<int>&n) // this is PASS BY REFERENCE method.....
{
    for(int i=0;i<10;i++) // here if we compare this with i<n.size() this statement will not be able to run loop as v.size()=0 at this point......
    {
        n.push_back(i);
    }
    cout<<"The size of the vector is:"<<n.size()<<endl;

}
int main()
{
    vector<int>number;
    function(number);
    for(int j=0;j<number.size();j++)
    {
        cout<<number[j]<<" ";
    }
    cout<<endl;
    cout<<"The size of the vector is: "<<number.size()<<endl;
    return 0;
}
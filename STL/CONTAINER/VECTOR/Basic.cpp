#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>hellow;
    hellow.push_back(5);
    hellow.push_back(9);
    cout<<hellow[0]<<endl;
    //name[Element_Number] represents the value of that particular location...
    cout<<hellow.size()<<endl;
    //hellow.size() returns the size of that vector........
    cout<<*hellow.begin()<<endl;
    //hellow.begin() only returns/points out the elemente address...
    //Where as the *hellow.begin() returns thhe value of that particular location.....
    cout<<*hellow.end()<<endl;
    //hellow.end() points to the location right after the last element......
    //*Hellow.end() returns a value of that location....Here it's a garbage value.....
    cout<<*--hellow.end()<<endl;
    //this will returns the value of last digit....
    cout<<hellow.empty()<<endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;         
    vector<int>v;
    cout<<"The size of the vector is: "<<v.size()<<endl;
    cout<<"The capacity of the vector is: "<<v.capacity()<<endl;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    cout<<"\n"<<v.back()<<endl;
    cout<<"The size of the vector is: "<<v.size()<<endl;
    cout<<"The capacity of the vector is: "<<v.capacity()<<endl;
    v.pop_back(); 
    v.pop_back();
    cout<<"The size of the vector is: "<<v.size()<<endl;
    cout<<"The capacity of the vector is: "<<v.capacity()<<endl;
    //v.insert(v.end()-1,9);          //   v.insert or v.erase always used with v.end() or v.begin() statement...
                                   //   v.end() points to the element right after the last element....
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n"<<v.back();
    //v.clear();
    cout<<"\n"<<"The size of the vector is: "<<v.size()<<endl;
    cout<<"The capacity of the vector is: "<<v.capacity()<<endl;
    return 0;
}
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    stack<int>st;
    st.push(5); //{5}
    st.push(3); //{5, 3}
    st.push(6); //{5, 3, 6}
    st.push(7); //{5, 3, 6, 7}
    
    cout<<st.top()<<endl; // prints 7 as it is inserted last...
    cout<<st.size()<<endl;

    st.pop(); // Delete the last elemment {7}....
    cout<<st.top()<<endl;  //print 6..
    cout<<st.size()<<endl;  // print 3;
    
    cout<<st.empty()<<endl; // Returns {0,1} * 0->False  * 1 ->True..
    return 0;
}
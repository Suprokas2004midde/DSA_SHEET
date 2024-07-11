#include<iostream>
#include<QUEUE>
#include<algorithm>
using namespace std;
int main()
{
    queue<int>st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);


    cout<<st.front()<<endl;
    cout<<st.back()<<endl;

    st.pop();

    
    cout<<st.front()<<endl;
    cout<<st.back()<<endl;

    st.emplace(9);

    cout<<st.front()<<endl;
    cout<<st.back()<<endl;
    return 0;
}
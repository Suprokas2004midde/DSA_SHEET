#include<iostream>
using namespace std;
int main()
{
    int x=5;
    cout<<x<<" "<<&x<<endl;
    // float *ptr=&x; ####Thiis is a wrong approachh to declear pointer....
    int *ptr=&x; // this is the right way to declear a pointer....
    cout<<ptr<<endl;
    return 0;
} 
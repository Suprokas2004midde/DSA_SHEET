#include <iostream>
using namespace std;
void leap(int n){
    if (n%4==0 && n%100!=0 || n%400==0)
    {
        cout<<"Its Leap year "<<endl;
    }
    else{
        cout<<"Its Not Leap Year !";
    }

}
int main(){
    int l;
    cout<<"Enter Your Year = ";
    cin>>l;
    leap(l);
return 0;
}
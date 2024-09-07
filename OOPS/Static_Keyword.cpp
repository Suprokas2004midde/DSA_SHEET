#include<iostream>
using namespace std;
/*void fun(){
    static int x=0;
    cout<<"x is: "<<x<<endl;
    x++;
}*/
class hellow{
    public:
    int x;
    void increase(){
        //cout<<"x is: "<<x<<endl;
        x++;
    }
};
int main()
{ 
    hellow obj1;
    obj1.x=100;
    obj1.increase();
    cout<<obj1.x<<endl;
    hellow obj2;
    obj2.x=200;
    cout<<obj2.x<<endl;
    return 0;
}
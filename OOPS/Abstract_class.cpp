#include<iostream>
using namespace std;
class shape{ //abstract class
    virtual void draw()=0; //pure virtual function (automatically instanciated abstract class)...
};
class circle: public shape{ //abstract class can only be inherited...
    public:
    void draw(){
        cout<<"hi,i am circle..."<<endl;
    }
};
int main()
{ 
    circle s1;
    s1.draw();
    return 0;
}
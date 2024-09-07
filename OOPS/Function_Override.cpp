#include<iostream>
using namespace std;
class parent{
    public:
    void getinfo(){
        cout<<"Hi,I am Parents class"<<endl;
    }
};
class child:public parent{
    public:
    void getinfo(){
        cout<<"Hi,I am child class"<<endl;
    }
};
int main()
{ 
    child c1;
    c1.getinfo();
    return 0;
}
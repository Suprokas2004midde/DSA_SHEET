#include<iostream>
using namespace std;
class department{

    public:
    string name;
    int teacher;
    int student;

    // Default or Non-Parameterized Constructor...
    department()
    {
        name="Computerscience";
        teacher=15;
        student=10;
    }

    // Parameterized constructor....
    // department(string name,int teacher,int student) 
    // {
    //     name=name;
    //     teacher=teacher; this type of declearation cause compilation error due to same name..()
    //     student=student;
    // }

    department(string name,int teacher,int student) //using this pointer...
    {
        this->name=name;
        this->teacher=teacher;
        this->student=student;
    }
    void getinfo()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Teacher no. is: "<<teacher<<endl;
        cout<<"Student no. is: "<<student<<endl;
    }
};
int main()
{ 
    department cse;
    department electrical("ElectricalDept",20,50);

    cse.getinfo();
    electrical.getinfo();

    return 0;
}
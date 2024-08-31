#include<iostream>
using namespace std;
class student{

    public:
    string name;
    int roll;
    float cgpa;

    //default constructor....
    student(string name,int roll,float cgpa)
    {
        this->name=name;
        this->roll=roll;
        this->cgpa=cgpa;
    }

    //copy constructor
    student(student& original)
    {
        cout<<"Custom made copy constructor..."<<endl;
        this->name= original.name;
        this->roll= original.roll;
        this->cgpa= original.cgpa;
    }

    void getinfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"cgpa: "<<cgpa<<endl;
    }
};
int main()
{ 
    student s1("ramesh",27600123,8.65);
    s1.getinfo();
    //By default copy constructor....
    student s2(s1);
    s2.getinfo();
    return 0;
}   
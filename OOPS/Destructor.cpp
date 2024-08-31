#include<iostream>
using namespace std;
class student {
    public:
    string name;
    float* cgpaptr;

    //parameterized constructor....
    student (string name,float cgpa)
    {
        this->name= name;
        cgpaptr= new float;
        *cgpaptr=cgpa;
    }

    //Custom Constructor(for copy)...
    student(student& orgobj) //this create an extra-poiner in heap to store the value of original data to the anothe new address.... 
    {
        this->name=orgobj.name;
        cgpaptr=new float;
        *cgpaptr = *orgobj.cgpaptr;
    }
    //destrutor
    ~student()
    {
        cout<<"Hi, i am destructor"<<endl;
    }
    //get details...
    void getinfo(){
        cout<<"name is: "<<name<<endl;
        cout<<"cgpa is: "<<*cgpaptr<<endl;
    }
};
int main()
{ 
    student s1("Suprokas",276001);
    return 0;
}
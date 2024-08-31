#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int* rollptr;
    float* cgpaptr;

    //parameterized constructor....
    student (string name,int roll,float cgpa)
    {
        this->name= name;
        rollptr= new int;
        *rollptr=roll;
        cgpaptr= new float;
        *cgpaptr=cgpa;
    }

    //Custom Constructor(for copy)...
    student(student& orgobj) //this create an extra-poiner in heap to store the value of original data to the anothe new address.... 
    {
        this->name=orgobj.name;
        rollptr=new int;
        *rollptr=*orgobj.rollptr;
        cgpaptr=new float;
        *cgpaptr = *orgobj.cgpaptr;
    }

    //Copy Constructor by default...
    // student(student& orgobj){
    //     this->name=orgobj.name;
    //     this->roll=orgobj.roll;
    //     this->cgpaptr=orgobj.cgpaptr;
    // }

    //get details...
    void getinfo(){
        cout<<"name is: "<<name<<endl;
        cout<<"roll is: "<<*rollptr<<endl;
        cout<<"cgpa is: "<<*cgpaptr<<endl;
    }
};

int main()
{ 
    student s1("Suprokas_Midde",2760123,7.16);
    s1.getinfo();
    //call copy constructor(by default).....
    student s2(s1);
    *(s2.cgpaptr)=8.5; // Due to dynamic memory allocation this line changes the value of s1 objects cgpa also... 
    *(s2.rollptr)=27600121;
    
    s1.getinfo();
    s2.getinfo();
    return 0;
}
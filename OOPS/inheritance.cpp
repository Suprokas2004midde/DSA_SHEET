#include<iostream>
using namespace std;
//Parents Class(Base)...
class school
{
    public:
    int standard;
    char sec;
    //constructor...
    school(int standard,char sec){
        cout<<"Hi, Iam parent class"<<endl;
        this->standard=standard;
        this->sec=sec;
    }
    // //destructor
    ~school(){
        cout<<"Hi, i Am Parent Destructor "<<endl;
    }
};
//Child class(Derived)...
class student: public school{ //fetch all the data's from the parent(school) class...
    public:
    string name;
    int age;
    //constructor
    student(string name,int age,int standard,char sec):school(standard,sec){
        cout<<"Hi,I am child class"<<endl;
        this->age=age;
        this->name=name;
    }

    //Destructor
    ~student(){
        cout<<"Hi, I am Child Destructor..."<<endl;
    }

    void getinfo(){
        cout<<"Class : "<<standard<<endl;
        cout<<"Section is: "<<sec<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
    }
};
int main()
{ 
    student s1("Suprokas Midde",20,12,'A');
    s1.getinfo();
    //cout<<s1.sec<<endl;
    return 0;
}
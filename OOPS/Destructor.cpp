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
    //destrutor
    ~student()
    {
        cout<<"Hi, i am destructor"<<endl;
        delete cgpaptr; //to avoid memory leak we use this delete function to clean the taken space.....
    }
    //get details...
    void getinfo(){
        cout<<"name is: "<<name<<endl;
        cout<<"cgpa is: "<<*cgpaptr<<endl;
    }
};
int main()
{ 
    student s1("Suprokas",8.65);
    s1.getinfo();//after this line the c++ compuler automatically calls the destructor......
    return 0;
}
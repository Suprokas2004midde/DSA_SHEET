#include<iostream>
using namespace std;
class Student{
    //By Default the data members are privet....(can be used inside the class only.)
    //public : (can be used the data members any where in the code...)

    private: //(we cann't use the data members outside the class now...)
    // if we wnated to use this data members explicitely we have to use extra functions....
    string department;

    public:
    long long int roll;
    float marks;

    //setter
    void setdepartment(string str)
    {
        department=str;
    }
    //getter
    string getdepartment(){
        return department;
    }

};
int main()
{ 
    Student sourav;
    //can use this method of accesing only when the data members are public...
    // sourav.department="CSE";
    // sourav.roll=27600123145;
    // cout<<sourav.department<<" "<<sourav.roll<<endl;

    //we can use it while the data members are privet...
    sourav.setdepartment("CSE");
    cout<<sourav.getdepartment()<<endl;
    return 0;
}
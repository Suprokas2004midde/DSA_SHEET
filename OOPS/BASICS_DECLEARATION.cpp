#include<iostream>
#include<algorithm>
using namespace std;

class Student{ // The size of an empty class is 1 to maintain it's identity....(not 0);

    //properties...
    public:
    int age;
    char sec;
};

int main()
{
    //Method no. 1 (using declearing object)
    Student bheem;
    bheem.age=14;
    bheem.sec='B';
    cout<<"The Age and age of Bheem is : "<<bheem.age<<", "<<bheem.sec<<endl;

    //Method no. 2 (using pointer to an object)
    Student *raju= new Student();
    raju->age=9;
    raju->sec= 'A';
    cout<<"The age and sec of raju is: "<<raju->age<<", "<<raju->sec<<endl;
    return 0;
}
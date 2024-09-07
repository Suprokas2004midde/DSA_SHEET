#include<iostream>
using namespace std;
class hellow{
    public:
    hellow(){
        cout<<"constructor.."<<endl;
    }
    ~hellow(){
        cout<<"Destructor.."<<endl;
    }
};
int main()
{ 
    if(1){
        static hellow obj1; //static keyword cretes this objects for lifetime of this programm till end;
    }
    
    cout<<"Ending of Main Function"<<endl;
    return 0;
}
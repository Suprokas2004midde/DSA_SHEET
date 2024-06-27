#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    //getline(cin,str); // in this method we can take input of string with SPACE..... 
    // cin>>str;          ## We can't take input aa space in this method.....Becaause the cin detect a termination when it found space....
    //cout<<str<<endl;
    char ch='A';
    cout<<ch<<" "<<int(ch)<<endl; //forst one print the character stored  in the ch variable...
    //Secound one print the ASCII value of the character......(TYPE CASTING)........
    return 0;
}
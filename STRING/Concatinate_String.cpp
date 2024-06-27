#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main ()
{
    string str1="Hellow";
    string str2="World";
    cout<<str1+str2<<endl;
    char arr[10]="suprokas";
    char arr1[10]="Midde";
    strcat(arr,arr1); //## 'strcat' and 'strstr' is used only to concatinet array of characters.... 
    char ch='F';
    str1.push_back(ch); //In this method we can add a character to the of the string........
    cout<<str1<<" "<<str1.size()<<" "<<str1.length()<<endl; //We can use both to determine the size of an string.....
    return 0;
}
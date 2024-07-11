//THIS CODE WILL NOT WORK FOR IN-SPACE REDUCTION OD DUPLICATES AS IT'S USES THE ADDITIONAL VECTOR....
//tHIS IS THE BRUTE FORCE....
#include<iostream>
#include<vector>
using namespace std;
int Removeduplicates(vector<int>&arr)
{
    int lastelement=arr[0];
    //Declearing additional vector......
    vector<int>v;
    //Operation to Find the Duplicates......
    for(int i=0;i<arr.size();i++)
    {
        if(lastelement!=arr[i]) 
        {
            v.push_back(lastelement);
            lastelement=arr[i];
        }
        
    }
    v.push_back(lastelement);
    //operation ends here....
    cout<<lastelement<<endl; //This line tells the last element of vector...
    // PPrint All the vector.....
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return v.size();
}
int main()
{
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    vector<int>v;
    //Taking input in the array...
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }
    //Calling the Remove_Duplicate function...
    int count=Removeduplicates(v);
    //Print the size of Removed duplicate array...
    cout<<"Unique numbers in the array is:"<<count<<endl;
    cout<<*(v.end()-1)<<endl;
    return 0;
}
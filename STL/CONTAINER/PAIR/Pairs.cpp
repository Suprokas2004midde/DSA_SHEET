#include<iostream>
using namespace std;
//For using pairs we must declear the UTILITY HEADER file...
#include<utility>
int main()
{
    pair<int,int> block={1,6};
    cout<<block.first<<" "<<block.second<<endl;
    pair<int,pair<int,int>> double_pair={1,{2,3}};
    cout<<double_pair.first<<" "<<double_pair.second.first<<" "<<double_pair.second.second<<endl;




    //We can define an array of pairs.....

    pair<int ,int> arr[3]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;
    return 0;
} 
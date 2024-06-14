#include<iostream>
using namespace std;
#include<utility>
int main()
{
    pair<int,int> block={1,6};
    cout<<block.first<<" "<<block.second<<endl;
    pair<int,pair<int,int>> double_pair={1,{2,3}};
    cout<<double_pair.first<<" "<<double_pair.second.first<<" "<<double_pair.second.second<<endl;
    return 0;
}
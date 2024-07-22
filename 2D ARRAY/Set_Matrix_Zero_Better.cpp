#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row=3;
    int col=4;
    int arr[row][col]={{1,1,1,1},{1,0,0,1},{1,1,1,1}};

    for(int i=0;i<row;i++) // Time complexity:-O(n*m)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int mark_row[row]={0}; 
    int mark_col[col]={0};

    for(int i=0;i<row;i++) //Time complexity:- O(n*m)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==0)
            {
                mark_row[i]=1;
                mark_col[j]=1;
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(mark_row[i]==1 || mark_col[j]==1)
            {
                arr[i][j]=0;
            }
        }
    }
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
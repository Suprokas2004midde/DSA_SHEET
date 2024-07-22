#include<iostream>
#include<vector>
using namespace std;

// This function marks the entire column and row of zeroth element as -1...
void mark_array(int arr[3][3],int row,int col)
{
    for(int i=0;i<3;i++)  // O(n*m)
    {
        for(int j=0;j<3;j++)
        {
            if(i==row || j==col)
            {
                arr[i][j]=-1;
            }
        }
    }
}
int main()
{
    
    int arr[3][3]={{1,1,1},{0,1,1},{1,1,1}};

    //Check if there is any element is zero or not..
    for(int i=0;i<3;i++)  // O(n*m)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            {
                mark_array(arr,i,j); // If zero then pass to mark it's row and column...
            }
        }
    }

    // Updating the marked(-1) element as 0....
    for(int i=0;i<3;i++)  //O(n*m)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==-1) arr[i][j]=0;
        }
    }

    // Printing the array....
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
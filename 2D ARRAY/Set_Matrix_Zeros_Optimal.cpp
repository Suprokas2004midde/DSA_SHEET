#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row=3;
    int col=4;
    int arr[row][col]={{0,1,1,1},{1,1,0,1},{1,1,1,1}};

    // Make an extra Cell for marking column 0....
    int col0=1;

    //Marking all cells according to the zeros...
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==0) //checks if the element is zero or not..!
            {
                arr[i][0]=0; //marks the rows 
                if( j!= 0 )  //if it's not the zeroth column...
                    arr[0][j]=0; //marks the column 
                else
                    col0=0; //marks only, if any zeroth column element is zero...
            }
        }
    }

    //updating the matrix except first row and first column....
    for(int i=1;i<row;i++) 
    {
        for(int j=1;j<col;j++)
        {
            if(arr[i][j]!=0)
            {
                if(arr[0][j]==0 || arr[i][0]==0) 
                arr[i][j]=0;
            }

        }
    }
    //updating the first row
    for(int j=1;j<col;j++)
    {
        if(arr[0][0]==0)
        arr[0][j]=0;
    }
    //updating the first column...
    for(int i=0;i<row;i++)
    {
        if(col0==0)
        arr[i][0]=0;
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
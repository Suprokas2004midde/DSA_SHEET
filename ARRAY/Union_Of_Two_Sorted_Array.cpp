#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void Union(int arr[],int brr[],vector<int>&v,int sizeArr,int sizeBrr)
{
    int i=0,j=0,lastcoppy=INT_MIN;
    while(i<sizeArr && j<sizeBrr)
    {
        if(arr[i]>lastcoppy && brr[j]>lastcoppy)
        {
            if(arr[i] == brr[j])
            {
                v.push_back(arr[i]);
                lastcoppy=arr[i];
                i++;
                j++;
            }
            else if(arr[i]< brr[j])
            {
                v.push_back(arr[i]);
                lastcoppy=arr[i];
                i++;
            }
            else if(arr[i]>brr[j])
            {
                v.push_back(brr[j]);
                lastcoppy=brr[j];
                j++;
            }
        }
        else
        {
            if(arr[i]<=lastcoppy) i++;
            else if(brr[j]<=lastcoppy) j++;
        }
    }
    while(j<sizeBrr)
    {
        if(lastcoppy!=brr[j])
        {
            v.push_back(brr[j]);
            lastcoppy=brr[j];
        }
        j++;
    }
    while(i<sizeArr)
    {
        if(lastcoppy!=arr[i])
        {
            v.push_back(arr[i]);
            lastcoppy=arr[i];
        }
        i++;
    }
    return;
}
void input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],brr[m];
    input(arr,n);
    input(brr,m);
    vector<int>v;
    Union(arr,brr,v,n,m);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void Union(int arr[], int brr[], vector<int>& v, int sizeArr, int sizeBrr)
// {
//     int i = 0, j = 0, lastCopied = INT_MIN;
//     while(i < sizeArr || j < sizeBrr)
//     {
//         // Avoid accessing elements out of bounds
//         int a = (i < sizeArr) ? arr[i] : INT_MAX;
//         int b = (j < sizeBrr) ? brr[j] : INT_MAX;

//         if (a == b)
//         {
//             if(a > lastCopied)
//             {
//                 v.push_back(a);
//                 lastCopied = a;
//             }
//             i++;
//             j++;
//         }
//         else if (a < b)
//         {
//             if(a > lastCopied)
//             {
//                 v.push_back(a);
//                 lastCopied = a;
//             }
//             i++;
//         }
//         else
//         {
//             if(b > lastCopied)
//             {
//                 v.push_back(b);
//                 lastCopied = b;
//             }
//             j++;
//         }
//     }
// }

// void input(int arr[], int size)
// {
//     for(int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n], brr[m];
//     input(arr, n);
//     input(brr, m);

//     // Assuming the input arrays are sorted. If not, we need to sort them.
//     sort(arr, arr + n);
//     sort(brr, brr + m);

//     vector<int> v;
//     Union(arr, brr, v, n, m);

//     for(int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     return 0;
// }

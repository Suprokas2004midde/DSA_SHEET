#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[10] = {6, 1, 2, 3, 5, 2, 3, 1, 0, 6};
    int max = arr[0], secmax = INT_MIN; // we can't declear the secmax variable as maximum(at first)...

    for (int i = 0; i < 10; i++) {
        if (arr[i] > max) {
            secmax = max;  // Update secmax to the previous max value
            max = arr[i];  // Update max to the new maximum value
        } 
        else if (arr[i] > secmax && arr[i] != max) 
        {
            secmax = arr[i];  // Update secmax to the new second maximum value
        }
    }

    cout << "The max number is: " << max << endl;
    cout << "The secmax number is: " << secmax << endl;
    return 0;
}

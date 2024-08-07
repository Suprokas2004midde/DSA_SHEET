#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& nums1, int n1, vector<int>& nums2, int n2) {
    int right = 0, left = n1 - 1;
    while (left >= 0 && right < n2) {
        if (nums1[left] > nums2[right]) {
            swap(nums1[left], nums2[right]);
        }
        left--;
        right++;
    }

    sort(nums1.begin(), nums1.begin() + n1);
    sort(nums2.begin(), nums2.end());
    
    for (int i = 0; i < n2; i++) {
        nums1[n1 + i] = nums2[i];
    }
}

int main() {
    int n1 = 3, n2 = 3;
    vector<int> nums1 = {2, 3, 1, 0, 0, 0};
    sort(nums1.begin(), nums1.begin() + 3);
    vector<int> nums2 = {2, 5, 6};
    merge(nums1, n1, nums2, n2);
    for (int i = 0; i < (n1 + n2); i++) {
        cout << nums1[i] << " ";
    }
    return 0;
}

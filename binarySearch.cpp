// Binary Search Algorithm Implementation in C++
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Target found
        }
        // If target is greater, ignore left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    return -1; // Target not found
}

//time complexity of binary search is O(log n) where n is the number of elements in the array. This is because with each iteration, the search space is halved, leading to a logarithmic time complexity.
//space complexity of binary search is O(1) as it uses a constant amount of space regardless of the input size. The algorithm only requires a few variables to keep track of the left, right, and mid indices, and does not use any additional data structures that grow with the input size
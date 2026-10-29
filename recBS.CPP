//RECURSIVE bINARY SEARCH
#include <iostream>
#include <vector>
using namespace std;
int recursiveBinarySearch(const vector<int>& arr, int left, int right, int target) {
    if (left > right) {
        return -1; // Target not found
    }

    int mid = left + (right - left) / 2;

    // Check if target is present at mid
    if (arr[mid] == target) {
        return mid; // Target found
    }
    // If target is greater, search in the right half
    else if (arr[mid] < target) {
        return recursiveBinarySearch(arr, mid + 1, right, target);
    }
    // If target is smaller, search in the left half
    else {
        return recursiveBinarySearch(arr, left, mid - 1, target);
    }
}
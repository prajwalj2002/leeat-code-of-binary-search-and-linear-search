#include <iostream>
using namespace std;

int binarySearchLarge(int arr[], int size, long long target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    long long arr[] = {1000000000, 2000000000, 3000000000, 4000000000, 5000000000};
    int size = sizeof(arr) / sizeof(arr[0]);
    long long target = 3000000000;
    int result = binarySearchLarge(arr, size, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}

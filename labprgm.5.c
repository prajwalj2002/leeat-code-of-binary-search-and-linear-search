#include <iostream>
using namespace std;

int binarySearchPointer(int* arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (*arr[mid] == target) return mid;
        if (*arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int* arr[] = {&a, &b, &c, &d, &e};
    int target = 3;
    int result = binarySearchPointer(arr, 5, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}

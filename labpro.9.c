#include <iostream>
#include <cstring>
using namespace std;

int binarySearchMixedTypes(void* arr[], int size, void* target, int (cmp)(void, void*)) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (cmp(arr[mid], target) == 0) return mid;
        if (cmp(arr[mid], target) < 0) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int compareInt(void* a, void* b) {
    return (int)a - (int)b;
}

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    void* arr[] = {&a, &b, &c, &d, &e};
    int target = 3;
    int result = binarySearchMixedTypes(arr, 5, &target, compareInt);
    cout << "Element found at index: " << result << endl;
    return 0;
}

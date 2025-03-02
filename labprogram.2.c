#include <iostream>
#include <vector>
using namespace std;

int binarySearchPairFirst(vector<pair<int, int>>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].first == target) return mid;
        if (arr[mid].first < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<pair<int, int>> arr = {{1, 10}, {2, 20}, {3, 30}, {4, 40}, {5, 50}};
    int target = 3;
    int result = binarySearchPairFirst(arr, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}


#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

int binarySearchTuple(vector<tuple<int, string>>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    cpp
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (get<0>(arr[mid]) == target) return mid;
        if (get<0>(arr[mid]) < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<tuple<int, string>> arr = {make_tuple(1, "One"), make_tuple(2, "Two"), make_tuple(3, "Three"), make_tuple(4, "Four"), make_tuple(5, "Five")};
    int target = 4;
    int result = binarySearchTuple(arr, target);
    cout << "Element found at index: " << result << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
};

int binarySearchBookById(Book arr[], int size, int targetId) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].id == targetId) return mid;
        if (arr[mid].id < targetId) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    Book arr[] = { {1, "1984"}, {2, "Brave New World"}, {3, "Fahrenheit 451"}, {4, "The Great Gatsby"}, {5, "Moby Dick"} };
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetId = 3;
    int result = binarySearchBookById(arr, size, targetId);
    cout << "Element found at index: " << result << endl;
    return 0;
}

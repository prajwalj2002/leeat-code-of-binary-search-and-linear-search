#include <iostream>
#include <string>
using namespace std;

struct Student {
    int age;
    string name;
};

int binarySearchStudentByAge(Student arr[], int size, int targetAge) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid].age == targetAge) return mid;
        if (arr[mid].age < targetAge) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    Student arr[] = { {20, "Alice"}, {22, "Bob"}, {24, "Charlie"}, {26, "David"}, {28, "Eve"} };
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetAge = 24;
    int result = binarySearchStudentByAge(arr, size, targetAge);
    cout << "Element found at index: " << result << endl;
    return 0;
}

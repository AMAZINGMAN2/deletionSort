#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteArray(int* &arr) {
    delete[] arr;
    arr = nullptr;
}

int main() {
    int arr[] = {12, 45, 23, 9, 37, 18, 61, 2, 25, 31, 7, 16, 48, 29, 41, 5, 22, 35, 14, 27, 39, 3, 56, 11, 33, 20, 54, 8, 43, 28, 51, 6, 17, 38, 10, 34, 44, 26, 50, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:" << endl;
    printArray(arr, size);

    deleteArray(arr);

    cout << "After 'deletionsort':" << endl;
    if (arr == nullptr) {
        cout << "Array is deleted." << endl;
    } else {
        printArray(arr, size);
    }

    return 0;
}

#include <iostream>
using namespace std;

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Utility function to print the array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed array: ";
    printArray(arr, size);

    return 0;
}

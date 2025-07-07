#include <iostream>
using namespace std;

// Function to find the maximum element in an array
int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Function to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Test: Find Maximum
    int arr1[] = {10, 25, 7, 33, 15};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int maxElement = findMax(arr1, size1);
    cout << "Maximum element in the array is: " << maxElement << endl;

    cout << endl;

    // Test: Reverse Array
    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Original array: ";
    printArray(arr2, size2);
    reverseArray(arr2, size2);
    cout << "Reversed array: ";
    printArray(arr2, size2);

    return 0;
}

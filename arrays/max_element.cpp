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

int main() {
    int arr[] = {10, 25, 7, 33, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, size);

    cout << "Maximum element in the array is: " << maxElement << endl;

    return 0;
}

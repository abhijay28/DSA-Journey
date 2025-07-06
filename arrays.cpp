
#include <iostream>
using namespace std;

// Function to print array elements
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Creating an array of 5 integers
    int myArray[5] = {10, 20, 30, 40, 50};

    // Printing the array
    printArray(myArray, 5);

    return 0;
}

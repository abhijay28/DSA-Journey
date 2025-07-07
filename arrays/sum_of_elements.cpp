#include <iostream>
using namespace std;

// Function to calculate the sum of all elements in an array
int sumOfElements(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int total = sumOfElements(arr, size);
    cout << "Sum of all elements in the array is: " << total << endl;

    return 0;
}

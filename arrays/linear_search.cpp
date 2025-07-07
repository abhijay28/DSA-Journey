#include <iostream>
using namespace std;

// Function to perform linear search
bool linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {10, 25, 7, 33, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchTarget = 33;

    bool found = linearSearch(arr, size, searchTarget);

    if(found) {
        cout << searchTarget << " is present in the array." << endl;
    } else {
        cout << searchTarget << " is NOT present in the array." << endl;
    }

    return 0;
}

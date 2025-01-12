#include <iostream>

void swapAdjacentPairs(char arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        // Swapping using a temporary variable
        char temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    const int size = 1000000; // Example size
    char* arr = new char[size + 1]; // +1 for null terminator

    // Fill the array with example data
    for (int i = 0; i < size; ++i) {
        arr[i] = 'a' + (i % 26); // Just filling with a-z
    }
    arr[size] = '\0'; // Null-terminate

    swapAdjacentPairs(arr, size);

    // Do something with the array...

    delete[] arr; // Clean up
    return 0;
}

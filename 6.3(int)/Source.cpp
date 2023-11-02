#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateArray(int arr[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int findLargestEven(int arr[], int size) {
    int largestEven = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > largestEven) {
            largestEven = arr[i];
        }
    }

    return largestEven;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    const int arrSize = 10;
    int t[arrSize];

    generateArray(t, arrSize, -22, 37);

    cout << "Original array: ";
    printArray(t, arrSize);

    int largestEven = findLargestEven(t, arrSize);

    cout << "The largest even number: " << largestEven << endl;

    return 0;
}

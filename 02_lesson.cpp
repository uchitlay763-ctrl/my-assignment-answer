#include <iostream>

using namespace std;

void findMinMaxReference(const int arr[], int size, int &minVal, int &maxVal) {
    minVal = arr[0];
    maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}

int main() {
    int arr[] = {4, 6, 39, 73, 2, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minVal, maxVal;
    findMinMaxReference(arr, size, minVal, maxVal);


    cout << "Min = " << minVal << endl;
    cout << "Max = " << maxVal << endl;

    return 0;
}

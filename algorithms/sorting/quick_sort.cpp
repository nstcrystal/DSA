#include <iostream>
using namespace std;

/*
 * Quick Sort
 * -----------------------
 * Time Complexity:
 * - Best/Average: O(n log n)
 * - Worst: O(n^2)
 * 
 * Space Complexity: O(log n)
 */

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // chọn pivot cuối
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Hàm in Danh sách
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Test nhanh
int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Danh sách ban dau: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Danh sách sau khi sap xep: ";
    printArray(arr, n);

    return 0;
}
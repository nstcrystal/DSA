#include <iostream>
using namespace std;

/*
 * Selection Sort
 * -----------------------
 * Ý tưởng:
 * - Mỗi lần chọn phần tử nhỏ nhất đưa lên đầu
 *
 * Time Complexity:
 * - Best/Average/Worst: O(n^2)
 *
 * Space Complexity: O(1)
 */

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
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

    selectionSort(arr, n);

    cout << "Danh sách sau khi sap xep: ";
    printArray(arr, n);

    return 0;
}
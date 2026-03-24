#include <iostream>
using namespace std;

/*
 * Insertion Sort
 * -----------------------
 * Ý tưởng:
 * - Duyệt từ trái sang phải
 * - Chèn phần tử hiện tại vào vị trí đúng trong phần đã sắp xếp
 *
 * Time Complexity:
 * - Best: O(n)
 * - Average: O(n^2)
 * - Worst: O(n^2)
 *
 * Space Complexity: O(1)
 */

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Dịch các phần tử lớn hơn key sang phải
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Hàm in mảng
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Test nhanh
int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Mang ban dau: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Mang sau khi sap xep: ";
    printArray(arr, n);

    return 0;
}
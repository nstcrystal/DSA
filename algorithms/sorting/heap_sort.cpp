#include <iostream>
using namespace std;

/*
 * Heap Sort
 * -----------------------
 * Ý tưởng:
 * - Dùng Max Heap
 * - Đưa phần tử lớn nhất về cuối
 *
 * Time Complexity: O(n log n)
 * 
 * Space Complexity: O(1)
 */

// Tạo max heap
void heapify(int arr[], int n, int i) {
    int largest = i;        // node lớn nhất
    int left = 2 * i + 1;   // con trái
    int right = 2 * i + 2;  // con phải

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Nếu root không phải lớn nhất → đổi chỗ
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // heapify tiếp
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Lấy phần tử lớn nhất về cuối
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);   // đưa max về cuối
        heapify(arr, i, 0);     // heap lại phần còn lại
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

    cout << "Danh sach ban dau: ";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "Danh sach sau khi sap xep: ";
    printArray(arr, n);

    return 0;
}
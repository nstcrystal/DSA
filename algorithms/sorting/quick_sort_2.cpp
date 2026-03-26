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

// Chọn pivot
int selectPivot(int arr[], int start, int end) {
    int i = start + 1;

    while (i < end && arr[i] == arr[start]) {
        i++;
    }

    if (i == end) {
        return -1;
    }

    if (arr[i] > arr[start]) {
        return arr[i];
    }

    return arr[start];
}

int partition(int arr[], int start, int end, int pivot) {
    int l = start;
    int r = end - 1;

    while (l <= r) {
        while (arr[l] < pivot) {
            l++;
        }

        while (arr[r] >= pivot) {
            r--;
        }

        if (l <= r) {
            swap(arr[l], arr[r]);
        }
    }

    return l;
} 


void quickSort(int arr[], int start, int end) {
    int pivot = selectPivot(arr, start, end);

    if (pivot != -1) {
        int mid = partition(arr, start, end, pivot);
        
        quickSort(arr, start, mid - 1);
        quickSort(arr, mid, end);
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

    quickSort(arr, 0, n - 1);

    cout << "Danh sach sau khi sap xep: ";
    printArray(arr, n);

    return 0;
}
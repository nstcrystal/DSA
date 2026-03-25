#include <iostream>
using namespace std;

/*
 * Binary Search
 * -----------------------
 * Điều kiện:
 * - Mảng phải được sắp xếp
 *
 * Time Complexity:
 * - O(log n)
 *
 * Space Complexity: O(1)
 */

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

// Hàm in Danh sách
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 40;

    cout << "Danh sach: ";
    printArray(arr, n);
    cout << "Can tim: " << target << endl;

    int result = binarySearch(arr, n, target);

    if (result != -1)
        cout << "Tim thay o index: " << result << endl;
    else
        cout << "Khong tim thay" << endl;

    return 0;
}
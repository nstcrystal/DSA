#include <iostream>
using namespace std;

/*
 * Linear Search
 * -----------------------
 * Ý tưởng:
 * - Duyệt từng phần tử để tìm giá trị
 *
 * Time Complexity:
 * - Best: O(1)
 * - Worst: O(n)
 *
 * Space Complexity: O(1)
 */

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;   // trả về vị trí
    }
    return -1;  // không tìm thấy
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
    int target = 30;

    cout << "Danh sach: ";
    printArray(arr, n);
    cout << "Can tim: " << target << endl;

    int result = linearSearch(arr, n, target);

    if (result != -1)
        cout << "Tim thay o index: " << result << endl;
    else
        cout << "Khong tim thay" << endl;

    return 0;
}
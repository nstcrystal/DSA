#include <iostream>
using namespace std;

/*
 * Array Basics
 * -----------------------
 * Các thao tác:
 * - Duyệt mảng
 * - Gán giá trị cho phần tử của mảng
 * - Lấy giá trị phần tử của mảng
 */

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Duyệt mảng
    for (int i = 0; i < n; i++)     // Phần tử đầu tiên có chỉ số là 0, phần tử cuối có chỉ số là n - 1
        cout << arr[i] << " ";
    cout << endl;

    // Gán giá trị cho phần tử của mảng, với 0 <= target <= n - 1
    int target = 3;
    arr[target] = 15;
    cout << "Gan gia tri 15 cho phan tu thu " << target << " cua mang" << endl;

    // Lấy giá trị phần tử của mảng, với 0 <= target <= n - 1
    cout << "Phan tu thu " << target << " cua mang la: " << arr[target] << endl;
    

    return 0;
}
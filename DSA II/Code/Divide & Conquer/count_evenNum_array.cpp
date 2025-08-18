#include<iostream>
using namespace std;

int countEvenNum(int arr[], int low, int high) {
    if (low > high) return 0; // Base case: no elements
    if (low == high) return (arr[low] % 2 == 0) ? 1 : 0; // Single element check

    int mid = (low + high) / 2;
    int leftCount = countEvenNum(arr, low, mid);
    int rightCount = countEvenNum(arr, mid + 1, high);

    return leftCount + rightCount; // Combine results
}
int main() {
    int arr[] = {2, 3, 4, 5,56 ,5,6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenCount = countEvenNum(arr, 0, n - 1);
    cout << "Count of even numbers in the array: " << evenCount << endl;
    return 0;
}
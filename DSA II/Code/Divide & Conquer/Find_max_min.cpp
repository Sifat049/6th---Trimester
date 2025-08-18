#include<iostream>
using namespace std;
struct Pair {
    int max;
    int min;
};
Pair findMaxMin(int arr[], int low, int high) {
    Pair result;
    if (low == high) { // Only one element
        result.max = arr[low];
        result.min = arr[low];
        return result;
    }
    if (high == low + 1) { // Two elements
        if (arr[low] > arr[high]) {
            result.max = arr[low];
            result.min = arr[high];
        } else {
            result.max = arr[high];
            result.min = arr[low];
        }
        return result;
    }

    int mid = (low + high) / 2;
    Pair leftPair = findMaxMin(arr, low, mid);
    Pair rightPair = findMaxMin(arr, mid + 1, high);

    result.max = max(leftPair.max, rightPair.max);
    result.min = min(leftPair.min, rightPair.min);
    
    return result;
}
int main()
{
    int arr[] = {12, 3, 5, 7, 19, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    Pair result = findMaxMin(arr, 0, n - 1);
    cout << "Maximum: " << result.max << endl;
    cout << "Minimum: " << result.min << endl;
    cout << "Max-Min Pair found using Divide and Conquer." << endl;
    return 0;
}   
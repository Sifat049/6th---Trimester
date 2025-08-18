#include<iostream>
using namespace std;    


int findLargest(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    return max(arr[n - 1], findLargest(arr, n - 1));
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int largest = findLargest(arr, n);
    cout << "Largest element in the array: " << largest << endl;
    
    return 0;
}   
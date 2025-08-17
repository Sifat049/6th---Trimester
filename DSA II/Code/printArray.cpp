#include <iostream>
using namespace std;

void printArray(int arr[], int index)
{
    if (index < 0)
        return;

    printArray(arr, index - 1);
    cout << arr[index] << " ";
}

int main()
{
    int p[ ] = {0, 2,45,6, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(p,sizeof(p)/sizeof(int) - 1);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (key == arr[mid])
    {
        return mid;
    }

    else
    {
        if (arr[mid] > key)
        {
            binary_search(arr, low, mid - 1, key);
        }

        else
        {
            binary_search(arr, mid, high - 1, key);
        }
    }

    
}

int main()
{
    int arr[7] = {1, 3, 23, 432, 23, 432, 2};
    int search = 3;

    cout << binary_search(arr, 0, 7, search) + 1;

    return 0;
}
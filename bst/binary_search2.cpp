#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (high+low) / 2;

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
    int arr[5]={6,2,90,36,69}
    int search = 36;

    cout << binary_search(arr, 0, 5, search) + 1;

    return 0;
}

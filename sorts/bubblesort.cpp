// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int counter = 1;

//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }

//     for (int i; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void swap_a(int *aj, int *aj1)
{
    int temp = *aj1;
    *aj1 = *aj;
    *aj = temp;
}

void bubble_sort(int *a, int k)
{
    bool ok = false;
    int pass = 0;

    for (int i = 0; i < k-1; i++)
    {
        ok = 0;
        pass = i;                                    // tells us how many time we transversed over array
        for (int j = 0; j < k - 1 - pass; j++)
        {

            if (a[j] > a[j + 1])
            {   
                cout<<j<<endl;
                swap_a(&a[j], &a[j + 1]);
                ok =1;
            }

            
        }
        if(ok == 0){
            break;
        }
    }
}

int main()
{
    int a[6] = {7, 4, 2, 1, 5, 8};
    // int a[6] = {1,2,3,4,5,6};

    bubble_sort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
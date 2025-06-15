#include <bits/stdc++.h>
using namespace std;
// 2nd array window or bubble window i--

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        // We will check in the first iteration if any swap is taking place.

        for (int j = 0; j <= i - 1; j++)
        {
            // say j, runs from 0 to i-1 because i is last element now
            // no next element left to compare with so j compare to i-1(j+1)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }

        // If the array is already sorted no swap will occur and we will break out from the loops.
        if (didSwap == 0)
        {
            break;
        }
    }

    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;
}

// Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.
// Time complexity in the best case will boil down to O(N), where N = size of the array.
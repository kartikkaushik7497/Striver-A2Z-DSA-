#include <bits/stdc++.h>
using namespace std;
// 3rd new check

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            //i=j when i=3 j-- will happen when swap is called
            //9 , 14, 15, 12 while i= 12 j= 12 and j & j-1 compared till 9
        }
    }

    cout << "After Using insertion sort: " << "\n";
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
    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, n);
    return 0;
}

// Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.
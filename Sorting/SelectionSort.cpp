#include <bits/stdc++.h>
using namespace std;
// 1st min selection

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

void swap(int arr[], int i, int min)
{
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}

int main()
{
    int n = 6;
    int arr[n] = {13, 46, 24, 52, 20, 9};

    cout << "Before selection sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selection_sort(arr, n);

    cout << "After selection sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Time complexity: O(N2), (where N = size of the array), for the best, worst, and average cases.
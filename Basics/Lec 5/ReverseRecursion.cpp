#include <bits/stdc++.h>
using namespace std;

// Function to print array
void printArray(int arr[], int n)
{
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// Function to reverse array using an auxiliary array
void reverse_array(int arr[], int i, int j)
{
    if (i < j)
    {
        swap(arr[i], arr[j]);
        reverse_array(arr, i + 1, j - 1);
    }
    printArray(arr, j + 1);
}
int main()
{
    int i, j = 0;

    int n = 5;
    int arr[] = {
        9,
        5,
        7,
        3,
        1,
    };
    reverse_array(arr, 0, n - 1);
    return 0;
}
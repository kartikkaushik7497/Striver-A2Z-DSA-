#include <bits/stdc++.h>
using namespace std;

// Function to print array
void printArray(int ans[], int n)
{
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
// Function to reverse array using an auxiliary array
void reverseArray(int arr[], int n, int x)
{
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[x] = arr[i];
        x++;
    }
    printArray(ans, n);
}
int main()
{
    int x = 0;

    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    reverseArray(arr, n, x);
    return 0;
}
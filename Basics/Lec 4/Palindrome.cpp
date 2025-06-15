
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int revNum = 0;
    int dup = n;
    while (n > 0)
    {
        int lastNum = n % 10;
        revNum = (revNum * 10) + lastNum;
        n = n / 10;
    }
    if (dup == revNum)
        cout << "Palindrome";
    else
        cout << "Not A Palindrome";
}
// Time Complexity: O(log10N + 1) where N is the input number.
// The time complexity is determined by the number of digits in the input integer N.
// In the worst case when N is a multiple of 10 the number of digits in N is log10 N + 1.

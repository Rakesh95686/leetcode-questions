#include <iostream>
int squareroot(int n)
{
    int s = 1;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        int val = mid * mid;
        if (val <= (long long)n)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return e;
}
using namespace std;
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;

    int ans = squareroot(n);
    cout << "the square root of " << n << " is :" << ans;
    return 0;
}
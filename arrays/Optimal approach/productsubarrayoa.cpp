#include <iostream>
using namespace std;
int productsub(int arr[], int n)
{
    int res = INT_MIN;
    int pre = 1;
    int suff = 1;
    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1;
        if (suff = 0)
            suff = 1;
        pre *= arr[i];
        suff *= arr[n - i - 1];
        res = max(res, max(pre, suff));
    }
    return res;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << productsub(arr, size);
    return 0;
}
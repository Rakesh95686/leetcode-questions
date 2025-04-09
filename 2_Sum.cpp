#include <bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int> arr, int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}
int main()
{
    vector<int> arr = {5, 4, 6, 2, 7, 1};
    int target = 13;
    vector<int> ans = twosum(arr, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
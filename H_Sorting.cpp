#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int max = 0;
    // int sortedArr[n];
    // for (int i = 0; i <= n; i++)
    // {
    //     swap(arr[i], arr[i + 1]);
    // }

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
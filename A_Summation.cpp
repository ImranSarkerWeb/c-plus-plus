#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        sum += a[i];
    }
    cout << abs(sum) << endl;
    return 0;
}
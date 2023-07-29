// find a min and max among three numbers using ternary
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int min_num = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    cout << "min= " << min_num << endl;

    int max_num = (a > b) ? (a > c) ? a : c : (b > c) ? b
                                                      : c;

    cout << "max= " << max_num;
    return 0;
}
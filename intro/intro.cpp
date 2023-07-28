#include <iostream>
using namespace std;
void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // cout << "a =" << a << endl
    //      << "b= " << b;
}

int main()
{

    int a, b;
    cin >> a >> b;
    my_swap(&a, &b);
    cout << a << " " << b;
    return 0;
}
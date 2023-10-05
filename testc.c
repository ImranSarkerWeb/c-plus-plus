#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = 99999;
    int pos = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            pos = i;
        }
    }
    printf("%d %d", pos, min);
    return 0;
}
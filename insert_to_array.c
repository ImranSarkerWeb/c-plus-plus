#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int pos, v;
    printf("\nEnter your position to insert value ");
    scanf("%d", &pos);
    printf("\nEnter your  value ");
    scanf("%d", &v);
    for (int i = n + 1; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = v;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }
    int delPos;
    printf("\nDelete item from position enter pos: ");
    scanf("%d", &delPos);

    for (int i = delPos; i <= n; i++)
    {
        a[i] = a[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
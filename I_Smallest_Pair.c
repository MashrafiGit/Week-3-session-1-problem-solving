#include <stdio.h>
#include <limits.h>
int main()
{
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++)
    {
        int n;
        scanf("%d", &n);

        int a[n + 1];

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }

        int val = INT_MAX;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int oper = a[i] + a[j] + j - i;
                if (val > oper)
                {
                    val = oper;
                }
            }
        }
        printf("%d\n", val);
    }

    return 0;
}
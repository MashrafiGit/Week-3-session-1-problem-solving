#include<stdio.h>
int main()
{
    int n; scanf("%d", &n);

    char a[n+1];


    for (int i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }

    int x, y, z; scanf("%d %c %d", &x, &y, &z);

    // let's do inserting
    for (int i = n; i > x; i--)
    {
        a[i] = a[i-1];
    }

    a[x] = y;
    

    // let's delete
    int tmp = a[n];
    for (int i = z; i <= n; i++)
    {
       a[i] = a[i+1];
    }


    for (int i = 0; i < n; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}
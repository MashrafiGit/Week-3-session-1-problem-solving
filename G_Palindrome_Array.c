#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
 
    int a[n];
 
    int palindrome = 1;
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    int i = 0;
    int j = n - 1;
 
    while (i < j)
    {
 
        if (a[i] != a[j])
        {
            palindrome = 0;
            break;
        }
 
        i++;
        j--;
    }
 
    if (palindrome == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
 
    return 0;
}
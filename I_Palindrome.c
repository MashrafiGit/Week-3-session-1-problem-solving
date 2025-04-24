#include <stdio.h>
int main()
{
    char s[1001];
    scanf("%s", s);
 
    int palindrome = 1;
 
    int i = 0;
    int j = strlen(s) - 1;
 
    while (i < j)
    {
        if (s[i] != s[j])
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
#include <stdio.h>

int main()

{
    int n;
    int i, j, k;
    printf("enter number=");
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("JAI SHREE RAM ");
        }
        printf("\n");
    }
    return 0;
}
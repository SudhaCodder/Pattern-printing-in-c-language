#include <stdio.h>
// **********
// **********
// **********
// **********
// **********

int main()
{
    int n;
    printf("enter number=");
    scanf("%d", &n);
    //*******...... upto n no ofstar
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= n; j++)

            printf("*");
        printf("\n");
    }

    return 0;
}
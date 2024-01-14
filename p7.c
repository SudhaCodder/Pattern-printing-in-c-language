#include <stdio.h>
// star print number of row and number of column give user
int main()
{
    int a, b;
    printf("enter the number of row=\n");
    scanf("%d", &a);
    printf("enter the number of column=\n");
    scanf("%d", &b);
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("*");
        }
        printf("\n"); // har line ke baad ek enter marne ke liye
    }
    return 0;
}
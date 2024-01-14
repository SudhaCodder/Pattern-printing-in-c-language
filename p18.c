#include <stdio.h>

/*
output:-
Enter the number of rows: 10
A
AB
ABC
ABCD
ABCDE
ABCDEF
ABCDEFG
ABCDEFGH
ABCDEFGHI
ABCDEFGHIJ

*/
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch++);
        }
        printf("\n");
    }

    return 0;
}

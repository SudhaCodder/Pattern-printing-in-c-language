// #include <stdio.h>
// // * * * * * * * * * * 
// // * * * * * * * * * 
// // * * * * * * * * 
// // * * * * * * * 
// // * * * * * * 
// // * * * * * 
// // * * * * 
// // * * * 
// // * * 
// // * 

// int main()
// {
//     int i, j;
//     for (i = 1; i <= 10; i++)
//     {
//         for (j = 10; j >= i; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n ;
    printf("Enter number:");
    scanf("%d",&n);
    int i , j;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>

/*
output:-
   Enter the number of rows :10

     *
    ***
   *****
  *******
 *********
***********
 *******
  *****
   ***
    *
   
*/
int main()
{
int i,j,k,r;      //declaring integer variables i,j,k for loops and r for number of rows
printf("Enter the number of rows :\n"); //Asking user for input
scanf("%d",&r);                         //saving number of rows in variable r
for(i=0;i<r;i++)                       //outer loop for number of rows
   {
      if(i<=r/2)                       //if condition to print the top half of diamond
         {
            for(k=r/2;k>i;k--)          //nested loop for number of spaces
               {
                 printf(" ");           //printing spaces
               }
            for(j=0;j<=i*2;j++)         //nested loop for printing stars
               {
                  printf("*");          //printing stars
               }
         }
      else                              //else condition to print the bottom half of the diamond
         {
            for(k=r/2;k<i;k++)          //nested loop to print spaces
               {
                  printf(" ");         //printing spaces
               }
            for(j=0;j<((r-i)*2)-1;j++)  //loop to print star
               {
                  printf("*");        //printing stars
               }  
         }
      printf("\n");                   //printing newline
   }
}

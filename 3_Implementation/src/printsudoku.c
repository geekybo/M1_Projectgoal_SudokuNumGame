

#include<stdio.h>
#include "sudoku.h"

int printSudoku(int arr[9][9])
{
     for (int a = 0; a < 9; a++)
      {
         for (int b = 0; b < 9; b++)
         {
             printf("%d  ",arr[a][b]); 
         }            
        printf("\n");
       }

       return 0;
}




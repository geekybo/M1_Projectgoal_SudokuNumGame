/**
 * @file sudoku.h
 * @author Janhavi Gomase   
 * @brief Header file for sudoku pr
 * @version 1.0.0
 * @date 2021-11-21
 * 
 * @copyright Copyright (c) 2021
 */

#include<stdio.h>
#include "sudoku.h"

int printSudoku(int arr[9][9])
{
     for (int i = 0; i < 9; i++)
      {
         for (int j = 0; j < 9; j++)
         {
             printf("%d  ",arr[i][j]); 
         }            
        printf("\n");
       }

       return 0;
}




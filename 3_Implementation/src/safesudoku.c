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

int safeSudoku(int arr[9][9],int row,int col,int num)
{
     
    // Check if we find the same num
    // in the similar row , we return 0
    for (int v = 0; v <= 8; v++)
    {
        if (arr[row][v] == num)
        {
           return 0;
        }         
    }
        
    // Check if we find the same num in the
    // similar column , we return 0
    for (int v = 0; v <= 8; v++)
    {
         if (arr[v][col] == num)
         {
             return 0;
         }
    }
       
            
 
    // Check if we find the same num in the
    // particular 3*3 matrix, we return 0
    int startRow = row - row % 3,
                 startCol = col - col % 3;
   
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            if (arr[a+startRow][b+startCol] == num)
            {
                return 0;
            }
        }
    }
 
    return 1;
}

## Sudoku Game
# CODE ANALYSIS
![Codiga](https://user-images.githubusercontent.com/98813646/153377566-9db9caf6-493a-4b28-b6a3-ff94e87bb8fa.PNG)
| Build | CPPcheck | Code Grade | Code Quality Score | Codacy |
| -- | -- | -- | -- | -- |
| [![C/C++ CI](https://github.com/Thotakura-Bhavya/Stepin_ATM_miniproject/actions/workflows/c_build.yml/badge.svg)](https://github.com/Thotakura-Bhavya/Stepin_ATM_miniproject/actions/workflows/c_build.yml)| [![cppcheck-action-test](https://github.com/JanhaviGomase/M1_Game_Sudoku/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/JanhaviGomase/M1_Game_Sudoku/actions/workflows/cppcheck.yml) | https://api.codiga.io/project/30937/status/svg | https://api.codiga.io/project/30937/score/svg | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/b0d9bb01644c4d3cb1d376b3b2758f90)](https://www.codacy.com/gh/geekybo/M1_Projectgoal_SudokuNumGame/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=geekybo/M1_Projectgoal_SudokuNumGame&amp;utm_campaign=Badge_Grade)

# Introduction

Sudoku is a popular number game. Sudoku is commonly seen in mobile phones, newspapers, magazines as this is played by many youngsters, kids and old age people. This is quiet challenging game which needs logic to be created properly.

The standard version of Sudoku consists of a 9×9 square grid containing 81 cells. The grid is subdivided into nine 3×3 blocks. Some of the 81 cells are filled in with numbers from the set {1,2,3,4,5,6,7,8,9}.

# Research

It assists to improve concentration and logical thinking. It helps to develop problem solving skills as well as it promotes a healthy mindset.

# Defining Our System

  -   Given a partially filled 9×9 2D array ‘grid[9][9]’, the goal is to assign digits (from 1 to 9) to the empty cells so that every row, column, and subgrid of size 3×3 contains exactly one instance of the digits from 1 to 9. 
  - Create a function that checks if the given matrix is valid sudoku or not. Keep Hashmap for the row, column and boxes. If any number has a frequency greater than 1 in the hashMap return false else return true;
  - Create a recursive function that takes a grid and the current row and column index.
  - Check some base cases. If the index is at the end of the matrix, i.e. i=N-1 and j=N then check if the grid is safe or not, if safe print the grid and return true else return false. The other base case is when the value of column is N, i.e j = N, then move to next row, i.e. i++ and j = 0.
  - if the current index is not assigned then fill the element from 1 to 9 and recur for all 9 cases with the index of next element, i.e. i, j+1. if the recursive call returns true then break the loop and return true.

  - if the current index is assigned then call the recursive function with index of next element, i.e. i, j+1.


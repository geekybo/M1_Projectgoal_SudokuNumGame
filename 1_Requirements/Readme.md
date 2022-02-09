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

# Requirements

This requires knowledge of C programming and basic idea to solve sudoku would be helpful.

# Cost &amp; Features

## Cost

 - Cost is not required to play this game.

## Feature

 - Solve a sudoku problem.
 - User can input new sudoku values and will output solution for it.

# SWOT Analysis

SWOT analysis is a strategic planning and strategic management technique used to help a person or organization identify strengths, weaknesses, opportunities, and threats.


## Strengths
- Simple algorithm to solve a problem.
- User interface to make it interesting.

## Weaknesses
- Input not in orderly fashion, and no tracking for the current row and column.
- Output could be overwhelming and will take multiple look to verify results.

## Opportunities
- Sudoku is challenging and brain ability game and this program will give an experience to user on this unique game.
- Graphic to increase user interface and the thinking ability

## Threats
- Competitors.
- Advancements in technology.
- Functionality is basic and get replaced by better algorithms.



# 4W and 1H

## 4W- Who, What, When, Where

Who- This game can be played by anyone.

What- Sudoku is a brain teaser game and one of the popular puzzle and use to come in mobile phones before android.

When- It is in process to build as a part of LTTS module being descriptive.

Where- It is made using visual studio code on windows 10.

## 1H- How

How- It will build using very simple algorithm by taking inputs from user and give a solution for the same.


# Detail Requirements

## High-Level Requirements

|ID| Description | Status
|--|--|--|
| HL1 | Contain sample and take User Sudoku | Implemented
| HL2 | Print the solution if exist | Implemented

## Low-Level Requirements
|ID| Description | Status
|--|--|--|
| LL1 | Sample and User sudoku in main() |Implemented
| LL2 | Call to solveSudoku() | Implemented
| LL3 | Check sudoku using safeSudoku() before solving | Implemented
| LL4 | solveSudoku() self call to fill the empty spaces | Implemented
| LL5 | Then print the solution, if exist | Implemented


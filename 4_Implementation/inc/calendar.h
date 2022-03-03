/**
 * @file sudoku.h
 * @author Janhavi Gomase  
 * @brief Header file for sudoku pr
 * @version 1.0.0
 * @date 2021-11-21
 * 
 * @copyright Copyright (c) 2021
 */

#ifndef __calendar__
#define __calendar__


/**
 * @brief Function to print calendar
 * 
 * @param arr calendar Passed
 */

int printcalendar(int arr[5][7]);

/**
 * @brief Function to check if input value is valid
 * and move to next column and rows.
 * 
 * @param arr calendar grid
 * @param row Row of calendar
 * @param col Column of calendar
 * @param num Number to be checked
 */

int safecalendar(int arr[5][7], int row, int col, int num);

/**
 * @brief Function to calendar
 * 
 * @param arr calendar Grid
 * @param row Row of calendar
 * @param col Column of calendar
 * @
 * 
 */

int solvecalendar(int arr[5][7],int row, int col);


#endif
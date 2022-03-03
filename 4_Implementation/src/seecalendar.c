#include<stdio.h>
#include "calendar.h"

int seeCalendar(int arr[5][7],int row,int col,int num)
{
     
    // Check if we find
    // in the similar row , we return 0
    for (int v = 0; v <= 7; v++)
    {
        if (arr[row][v] == num)
        {
           return 0;
        }         
    }
        
    // Check if we find the same date in
    // similar column , we return 0
    for (int v = 0; v <= 7; v++)
    {
         if (arr[v][col] == num)
         {
             return 0;
         }
    }
       
            
 
    // Check if we find the same num in the
    // particular matrix, we return 0
    int startRow = row - row % 3,
                 startCol = col - col % 3;
   
    for (int a = 0; a < 5 ; a++)
    {
        for (int b = 0; b < 7; b++)
        {
            if (arr[a+startRow][b+startCol] == num)
            {
                return 0;
            }
        }
    }
 
    return 1;
}
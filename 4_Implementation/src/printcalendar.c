#include<stdio.h>
#include "calendar.h"

int printcalendar(int arr[5][7])
{
     for (int a = 0; a < 5; a++)
      {
         for (int b = 0; b < 7; b++)
         {
             printf("%d  ",arr[a][b]); 
         }            
        printf("\n");
       }

       return 0;
}

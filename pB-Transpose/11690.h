#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}



void Transpose( int* row, int* col, int matrix[][500] ){

int i,j;

for(i=0;i<*row;i++){
    for(j=0;j<*col;j++){
    swap(&matrix[i][j], &matrix[j][i]);
    }
}

swap(row,col);


}

#endif

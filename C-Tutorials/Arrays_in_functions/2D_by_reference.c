#include<stdio.h>
#include<stdlib.h>
void print( int ** arr , int row, int col ){
    int i , j;
    for ( i = 0; i < row; i++) {
            for( j = 0; j < col; j++)
                    printf("%d " , arr[i][j]);
            printf("\n");
    }
}
int main() {
    int row, col, i , j;
    scanf("%d" , &row);
    scanf("%d" , &col);
    int **arr = (int **) malloc( sizeof( int*) * row);
    for( i = 0; i < row; i++) {
            arr[i] = (int * ) malloc( sizeof( int ) * col );
    }
    //now Scan or initialise
    for( i = 0; i < row; i++) {
            for( j = 0; j < col; j++)
                    scanf("%d" , &arr[i][j]);
    }
    // pass the array to function print as 
    print ( arr ,  row, col);
    return 0;
}
 

#include <stdio.h>

int main(){
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // answer
    int c[3][3] = {};
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            for(int count = 0; count < 3; count++){
                c[row][col] += a[row][count] * b[count][col];
            }
        }
    }
    // print matrix
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            printf("%d ", c[row][col]);
        }
        printf("\n");
    }
    return 0;
}
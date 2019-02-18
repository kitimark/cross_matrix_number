#include <stdio.h>

int min(int a, int b){
    return a <= b ? a : b;
}

int main(){
    int a[3][3] = {{1, 0, 0}, {2, 3, 0}, {4, 5, 6}};
    int b[3][3] = {{1, 2, 3}, {0, 4, 5}, {0, 0, 6}};

    int c[3][3] = {};
    // calculate
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            for(int count = 0; count < min(row + 1, col + 1); count++){
                c[row][col] += a[row][count] * b[count][col];
            }
        }
    }
    //print matrix
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            printf("%d ", c[row][col]);
        }
        printf("\n");
    }
    return 0;
}
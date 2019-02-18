#include <stdio.h>

int main(){
    int a[3][3] = {{1, 0, 0}, {0, 2, 0}, {0, 0, 3}};
    int b[3][3] = {{1, 0, 0}, {0, 2, 0}, {0, 0, 3}};
    
    int c[3][3] = {};
    for(int count = 0; count < 3; count++){
        c[count][count] = a[count][count]*b[count][count];
    }
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            printf("%d ", c[row][col]);
        }
        printf("\n");
    }
    return 0;
}
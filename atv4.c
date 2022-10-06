#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[2][3] = {{1,5,4},{3,7,0}};
    int mat2[3][2];
    int j, i;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            mat2[i][j] = mat[j][i];
        } 
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat2[i][j]);
        }
    printf("\n");
    }
    
    return 0;
}
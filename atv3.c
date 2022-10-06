#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3] = {{-1,-2,-3},{-4,-5,-6},{-7,-8,-9}};
    int soma[9];
    int j, i, n = 0;
    
    for(i = 0; i < 3; i++){
        for(j = 0 ; j < 3; j++){
            soma[n] = mat[i][j] + mat2[i][j];
            n++;
        }
    }

    for (i = 0; i < 9; i++) {
        if (soma[i] != 0) {
            printf("Não são opostas.");
            return 0;
        }
    } printf("São opostas");

    return 0;
}
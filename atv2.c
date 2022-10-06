#include<stdio.h>

int main(){
    int D[3][3], i=0, j=0, soma1=0,soma2=0 ,x=3;
    printf("Informe os valores da matriz\n");

    for(i = 0; i < 3; i++){   
        x--;
        for(j = 0; j < 3; j++){
            printf("%d - %d = ", i + 1, j + 1);
            scanf("%d",&D[i][j]);
        }
        soma1=soma1+D[i][i];
        soma2=soma2+D[i][x];
    }

    printf("\nSoma diagonal principal:\t%d",soma1);
    printf("\nSoma diagonal secundaria:\t%d",soma2);

    return 0;
}
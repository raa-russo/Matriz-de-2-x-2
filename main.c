#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("TEstando no VSCode!\n");
    int tam = 5;
    int matriz[tam][tam], soma[tam], multiplica[4];
    int a,b, somap, multiplicap;
    printf("Preenchendo a matriz: \n");

    for(a = 0; a < tam; a++) {
        for(b = 0; b < tam; b++){
            matriz[a][b] = rand()%10;
        }
    }
    //imprimindo matriz
     for(a = 0; a < tam; a++) {
        for(b = 0; b < tam; b++){
             printf("[%2d ]",matriz[a][b] );
        }
         printf("\n");
    }
    //somando as linhas
    for(a = 0; a < tam; a++) {
        somap = 0;
        for(b = 0; b < tam; b++){
            somap += matriz[a][b];
        }
        soma[a] = somap;
         printf("[%d ]\n", soma[a]);
    }
    //multiplica��o das linhas
     for(a = 0; a < tam; a++) {
        multiplicap = 0;
        for(b = 0; b < tam; b++){
            multiplicap = matriz[a][b] * soma[a];
        }
        multiplica[a] = multiplicap;
    }
    printf("\nOs valores somados da linhas sao: \n");
    for(a=0;a<tam;a++){
        printf("[ %d ]\n ", soma[a]);
    }
    printf("\n\n");
     printf("\nOs valores multiplicados das linhas sao: \n");
    for(a=0;a<tam;a++){
        printf("[ %d ]", multiplica[a]);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    int X[4][4];
    int Y[4][4]; 
    int R[4][4];
    char Calculo[16];

    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &X[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &Y[i][j]);
        }
    }

    scanf("%s", Calculo);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(strcmp(Calculo, "soma") == 0){
                R[i][j] = X[i][j] + Y[i][j];
            } 
            else if(strcmp(Calculo, "sub") == 0){
                R[i][j] = X[i][j] - Y[i][j];
            } 
            else if(strcmp(Calculo, "mult") == 0){
              R[i][j] = 0;
              for (int l = 0; l < 4; l++){
                  R[i][j] += X[i][l] * Y[l][j];
              }
            }
            else{
              printf("Não foi possivel gerar a matriz!!\n");
            }
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%3d", R[i][j]);
          
        }
        printf("\n");
    }

    return 0;
}

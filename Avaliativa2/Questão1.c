#include <stdio.h>

int main() {
    
  int X[10];
  int Y[10];
  int Tamanho = 10;

  for(int i = 0; i < 10; i++){
    scanf("%d", &X[i]);
    Y[i] = X[i];
  }

  for(int i = 0; i < 10; i++){
    printf("%d", X[i]);
    if (i < 9){
      printf(" ");
    }
  }
  printf("\n");

  while(Tamanho > 1){
    for(int i = 0; i < Tamanho - 1; i++){
      Y[i] = X[i] + X[i + 1];
    }
    Tamanho--;
    for(int i = 0; i < Tamanho; i++){
      printf("%d", Y[i]);
      if (i < Tamanho - 1){
        printf(" ");
      }
    }
    printf("\n");

    for (int i = 0; i < Tamanho; i++){
      X[i] = Y[i];
    }
  }
  return 0;
  
}


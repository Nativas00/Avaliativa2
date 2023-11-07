#include <stdio.h>

struct Jogador{
  char Nome[30];
  char Posicao;
  double Poder;
};

struct Time{
  char Nome[30];
  struct Jogador Jogadores[11];
};

double CalcularPoderTotal(struct Time time){
  double PoderTotal = 0;

  for (int i = 0; i < 11; i++){
    char posicao = time.Jogadores[i].Posicao;
    double Poder = time.Jogadores[i].Poder;
    switch (posicao){
      case 'A': PoderTotal += 12.00 * Poder; break;
      case 'M': PoderTotal += 11.00 * Poder; break;
      case 'L': PoderTotal += 10.00 * Poder; break;
      case 'G': PoderTotal += 8.00 * Poder; break;
      case 'V': PoderTotal += 8.00 * Poder; break;
      case 'Z': PoderTotal += 5.00 * Poder; break;
    }
  }
  return PoderTotal / 100.00;
  
}

int main(){
  struct Time time1, time2;
  scanf("%30[^\n]%*c", time1.Nome);
  for(int i = 0; i < 11; i++){
    scanf("%30[^;]; %c; %lf%*c", time1.Jogadores[i].Nome, &time1.Jogadores[i].Posicao, &time1.Jogadores[i].Poder);
  }

  scanf("%30[^\n]%*c", time2.Nome);
  for(int i = 0; i < 11; i++){
    scanf("%30[^;]; %c; %lf%*c", time2.Jogadores[i].Nome, &time2.Jogadores[i].Posicao, &time2.Jogadores[i].Poder);
  }

  double PoderDoTime1 = CalcularPoderTotal(time1);
  double PoderDoTime2 = CalcularPoderTotal(time2);

  if (PoderDoTime1 > PoderDoTime2) {
    printf("%s eh mais forte\n", time1.Nome);
  } 
  else if (PoderDoTime1 < PoderDoTime2) {
    printf("%s eh mais forte\n", time2.Nome);
  }
  return 0;
}

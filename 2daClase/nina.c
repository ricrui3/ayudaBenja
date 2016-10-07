#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int numSaltos = 4;
  int saltos[] = {6, -5, 5, -1};
  int posNina = 6;
  int posRana = 0;
  int ninaAplastada = 0;
  int i = 0;

  printf("posRana: %d posNina: %d ninaAplastada: %d\n", posRana, posNina,
         ninaAplastada);
  for (i = 0; i < numSaltos; ++i) {
    posRana += saltos[i];
    if (posNina == posRana) {
      ninaAplastada++;
    }
    printf("posRana: %d posNina: %d ninaAplastada: %d\n", posRana, posNina,
           ninaAplastada);
  }

  return 0;
}
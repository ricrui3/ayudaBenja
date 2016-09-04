#include <stdio.h>
#include <stdlib.h>

void inicializaLista(int tamLista, int lista[]);
void imprimeLista(int tamLista, int lista[]);
void metodoBurbuja(int tamLista, int lista[]);

int main(int argc, char const *argv[]) {
  //./main.out [numElementos] [elem, elem, ...]
  //./main.out 2 4 6 8 10

  int tamLista = argc - 1;
  int lista[tamLista];

  // convertir de string a integer
  int i;
  for (i = 0; i < tamLista; ++i) {
    lista[i] = atoi(argv[i + 1]);
  }

  inicializaLista(tamLista, lista);
  imprimeLista(tamLista, lista);

  return 0;
}

void inicializaLista(int tamLista, int lista[]) {
  printf("El numero de elementos es: %d\n", tamLista);
}

void imprimeLista(int tamLista, int lista[]) {
  int i = 0;
  printf("Los valores de la lista son:\n");
  for (i = 0; i < tamLista; ++i) {
    printf("%d\n", lista[i]);
  }
}

void metodoBurbuja(int tamLista, int lista[]){
	//
}

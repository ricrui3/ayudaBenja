#include <stdio.h>
#include <stdlib.h>

void inicializaLista(int tamLista, int lista[]);
void imprimeLista(int tamLista, int lista[]);
void metodoBurbuja(int tamLista, int lista[]);

int main(int argc, char const *argv[]) {
  //./main.out [numElementos] [elem, elem, ...]
  //./main.out 2 4 6 8 10

  if (argc == 1) {
    int tamLista;

    printf("Cuantos valores desea ingresar?\n");
    scanf("%d", &tamLista);

    int lista[tamLista];
    int i;
    for (i = 0; i < tamLista; ++i) {
      scanf("%d", &lista[i]);
    }
    inicializaLista(tamLista, lista);
    imprimeLista(tamLista, lista);

    metodoBurbuja(tamLista, lista);
    imprimeLista(tamLista, lista);
  } else {
    int tamLista = argc - 1;
    int lista[tamLista];
    // convertir de string a integer
    int i;
    for (i = 0; i < tamLista; ++i) {
      lista[i] = atoi(argv[i + 1]);
    }

    inicializaLista(tamLista, lista);
    imprimeLista(tamLista, lista);

    metodoBurbuja(tamLista, lista);
    imprimeLista(tamLista, lista);
  }
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

void metodoBurbuja(int tamLista, int lista[]) {
  int i, j, aux;
  for (i = 0; i < tamLista; i++) {
    for (j = 0; j < tamLista; j++) {
      if (lista[j] > lista[j + 1]) {
        aux = lista[j];
        lista[j] = lista[j + 1];
        lista[j + 1] = aux;
      }
    }
  }
}

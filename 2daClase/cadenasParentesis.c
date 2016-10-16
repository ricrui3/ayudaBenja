#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char cadena[100];
  char parentesis[100];
  int tamCadena;
  // Si la cadena es valida = 1, sino = 0
  int cadenaValida = 1;
  int iParentesis = 0;
  int i;

  scanf("%s", &cadena);
  tamCadena = strlen(cadena);
  for (i = 0; i < tamCadena; i++) {
    // Si la cadena es valida entonces evalua el siguiente caracter
    if (cadena[i] == 'a' || cadena[i] == 'b' || cadena[i] == 'c' ||
        cadena[i] == 'd' || cadena[i] == '(' || cadena[i] == ')') {
      if (cadena[i] == '(') {
        parentesis[iParentesis] = '(';
        iParentesis++;
      } else if (cadena[i] == ')') {
        if (parentesis[iParentesis - 1] == '(') {
          iParentesis--;
        } else {
          cadenaValida = 0;
        }
      }
    } else {
      printf("0\n");
      return 0;
    }
  }
  if(iParentesis != 0){
    printf("0\n");
    return 0;
  }
  if (cadenaValida == 1) {
    printf("1\n");
    return 0;
  } else {
    printf("0\n");
    return 0;
  }
  return 0;
}

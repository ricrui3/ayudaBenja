#include <stdio.h>
#include <string.h>

int main() {
  char cadena[100];
  char parentesis[100];
  int parentesis = 0;
  int tamCadena;
  int i;
  int x;

  scanf("%s", &cadena);
  tamCadena = strlen(cadena);
  for (i = 0; i < tamCadena; i++) {
    if (cadena[i] == 'a' || cadena[i] == 'b' || cadena[i] == 'c' || cadena[i] == 'd' ||
        cadena[i] == '(' || cadena[i] == ')') {

    }
    else{
      return 0;
    }
  }
  if (parentesis == parentesis1) {
    printf("1");
    return 0;
  }
  if (parentesis < parentesis1) {
    printf("0");
    return 0;
  }
  if (parentesis > parentesis1) {
    printf("0");
    return 0;
  }

  for (i = 0; i < n; i++) {
    if (cadena[i] == 'a' && cadena[i] == 'b' && cadena[i] == 'c' && cadena[i] == 'd') {
      printf("1");
      return 0;
    }
  }
  return 0;
}

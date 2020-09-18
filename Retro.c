#include <stdio.h>

int main(){
    char op;

    do
    {
      printf("1) Capturar enteros\n");
      printf("2) Mostrar Cadena n veces\n");
      printf("3) Agregar Personaje\n");
      printf("0) Salir\n");
      scanf("%c", &op);
      fflush(stdin);

    } while (op != '0');
    
    return 0;
}
#include <stdio.h>

void Capturar_Enteros(){
    int enteros[5];
    float promedio;
    int suma = 0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i", &enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i\n", enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma = suma + enteros[i];
    }
    printf("Suma: %i\n", suma);
    printf("Primedio: %f\n", suma/5.0);
    
}

void mostrar(int n, char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s", cadena);
    }
    
}

int main(){
    char op;
    char cadena[20];
    int n;
    do
    {
      printf("1) Capturar enteros\n");
      printf("2) Mostrar Cadena n veces\n");
      printf("3) Agregar Personaje\n");
      printf("0) Salir\n");
      scanf("%c", &op);

    switch (op)
    {
    case '1':
        Capturar_Enteros();
        break;
    case '2':
        printf("Escribe una Cadena de caracteres: ");
        fflush(stdin);
        fgets(cadena, sizeof(cadena), stdin);
        printf("Veces que se repetira?: ");
        scanf("%i", &n);
        mostrar(n, cadena);
        break;
    case '3':

        break;
    default:
        break;
    }

      fflush(stdin);

    } while (op != '0');
    
    return 0;
}
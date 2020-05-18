#include <stdio.h>
#include <stdlib.h>
int contarCaracteres(char* cadena,char caracter);
int main()
{
    char nombre[100] = "Facundo Fernando Fernandez";
    int numero;

    numero = contarCaracteres(nombre,'F');

    printf("La cantidad de letras F es %d",numero);




    return 0;
}
int contarCaracteres(char* cadena,char caracter)
{
    int retorno;
    int contadorChar = 0;

    for(int i = 0; cadena[i] != '\0' ;i++)
    {
        if(cadena[i] == caracter)
        {

         contadorChar++;

        }

    }
    retorno = contadorChar;


    return retorno;
}

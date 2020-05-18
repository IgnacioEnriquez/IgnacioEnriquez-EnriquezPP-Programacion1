#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float precio);
int main()
{
    float precio = 25.7;

    printf("Precio sin descuento = %f\n",precio);

    precio = aplicarDescuento(precio);

    printf("Precio con descuento = %f",precio);



    return 0;
}
float aplicarDescuento(float precio)
{
   float retorno = -1;

   retorno = precio * 0.05;

   return retorno;
}

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;


} Notebook;

#define TAMC 5
void ordenarArray(Notebook* list,int tam);
void mostrarDatos(Notebook* x,int tam);
void mostrarDato(Notebook x);
int main()
{
    Notebook computadoras[TAMC] = {
    {1111,"Intel I5","Lenovo",90.000},
    {3333,"Intel I9","Noga",55.350 },
    {5555,"AMD Ryze 9000","Hp",30.600},
    {2222,"AMD I15","Lenovo",89.200},
    {44444,"Intel Full 4000","Asus",20.700}

    };

    mostrarDatos(computadoras,TAMC);

    ordenarArray(computadoras,TAMC);

    mostrarDatos(computadoras,TAMC);




    return 0;
}
void ordenarArray(Notebook* list,int tam)
{
    Notebook aux;
    for(int i = 0; i < tam -1 ;i++)
    {
        for(int j = i+1; j <tam;j ++)
        {
               if(strcmp(list[i].marca,list[j].marca) == 1)
               {
                 aux = list[i];
                 list[i] = list[j];
                 list[j] = aux;


               }
               else if(strcmp(list[i].marca,list[j].marca) == 0 && list[i].precio < list[j].precio )
               {

                 aux = list[i];
                 list[i] = list[j];
                 list[j] = aux;

               }

        }

    }

}
void mostrarDato(Notebook x)
{

    printf("%d    %10s    %.3f   %20s\n",x.id,x.marca,x.precio,x.procesador);

}
void mostrarDatos(Notebook* x,int tam)
{


    printf("\n********** Lista de Datos************\n");
    for(int i = 0; i < tam ; i++)
    {

            mostrarDato(x[i]);

    }

}

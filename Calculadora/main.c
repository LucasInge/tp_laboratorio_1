#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int menu;
int numA;
int numB;
int suma;
int resta;
int multiplicacion;
int division;
int factorial;
char respuesta;

void preguntaA (void) //Imprime en pantalla las opciones.
{
    printf("\nElija la operacion a Realizar \n 1\tSUMAR  \n 2\tRESTAR \n 3\tMULTIPLICAR \n 4\tDIVIDIR \n 5\tFACTORIAR \n 0\tFinalizar programa \n:\t");
}

int main(void)
{
    logo();
    do
    {
    preguntaA(); //Imprime en pantalla las opciones.
    scanf("%d",&menu);
    if (menu!=0)//si el numero ingresado es distinto de 0 pedira el ingreso de dos numeros y luego acudira a la opcion elegida
     {
    getNumber (&numA,&numB, "\nIngrese el Primer Numero: ", "\nIngrese el Segundo Numero: ");
    switch (menu)
    {
        case 1:
        suma=sumNumber(numA,numB);
        break;
        case 2:
        resta=subtractNumber(numA,numB);
        break;
        case 3:
        multiplicacion=MultiplicationNumber(numA,numB);
        break;
        case 4:
        division=divitionNumber(numA,numB);
        break;
        case 5:
        factorial=factorialNumber(numA,numB);
        break;
        default:
        printf("ERROR");
        break;
    }

        printf("\nQuiere Hacer otra operacion? \n (s)i / (n)o: \n");//en caso de realizar otra operacion.
        scanf(" %c",&respuesta);
    }
    else //si el numero ingresado en la variable menu es 0. terminara el proceso
    {
        printf("\n---Operacion Terminada---");
        printf("\n");
        return 0;
    }
    }while (respuesta =='s'); //se ejeutara siempre que el usuario ingrese s en la variable respuesta.
    printf("\n---Operacion Terminada---");
    printf("\n");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

/* Devuelve (Return) 0, si está todo bien.
    Error de volverá -1; */

int getNumber (int* numA, int* numB, char* msgA, char* msgB)//(PrimerNumero; SegundoNumero; "Primer mensaje"; "SegundoMensaje");
{
    int numeroA=0;
    int numeroB=0;
    printf("%s", msgA);
    scanf("%d",&numeroA);
    *numA=numeroA;
    printf("%s", msgB);
    scanf("%d",&numeroB);
    *numB=numeroB;
    return 0;
}
int sumNumber (int numA, int numB) //suma los numeros ingresados e imprime su resultado
{
    int sum;
    sum=numA+numB;
    printf("\n--La Suma de estos Numeros es:\n %d",sum);
    return 0;
}
int subtractNumber (int numA, int numB) //resta los numeros ingresados e imprime su resultado
{
    int sub;
    sub=numA-numB;
    printf("\n--La Resta de estos Numeros es:\n %d",sub);
    return 0;
}
int MultiplicationNumber (int numA, int numB) //multiplica los numeros ingresados e imprime su resultado
{
    int mult;
    mult=numA*numB;
    printf("\n--La Multiplicacion de estos Numeros es:\n %d",mult);
    return 0;
}

int divitionNumber (int numA, int numB) //divide los numeros ingresados y imprime su resultado
{
    int div;
    if (numB!=0) //en caso el divisor no sea 0, realiza la division
    {
        div=numA/numB;
        printf("\n--La Division de estos Numeros es:\n %d",div);
    }
    else //en caso el divisor sea 0, imprimira un mensaje que la division no es piosible
    {
        printf("\n--No es posible dividir por cero \n");
        return 0;
    }
    return 0;
}
int factorialNumber (int numA, int numB) //factoriza los numeros ingresados e imprime sus resultados
{
    if (numA>0) //solo hara factorial de los numeros ingresados cuando estos sean mayores a 0.
    {
    int factA=1;
    int i;
    for (i=1;i<=numA;i++)
    {
        factA= factA*i;
    }
    printf("\n--El Factorial del Primero Numero es:\n %d",factA);
    }
    else //si lo los numeros ingresados son menores a 1 imprimira un mensaje
    {
        printf("\n--No se puede Factoriar ese numero\n");
    }

    if (numB>0) //solo hara factorial de los numeros ingresados cuando estos sean mayores a 0.
    {
    int factB=1;
    int j;
    for (j=1;j<=numB;j++)
    {
        factB= factB*j;
    }
    printf("\n--El Factorial del Segundo Numero es:\n %d",factB);
    }
    else//si lo los numeros ingresados son menores a 1 imprimira un mensaje
    {
        printf("\n--No se puede Factoriar ese numero\n");
    }
    return 0;
}
int logo (void)
{
    printf("\n");
    printf("                #################################################################################  \n");
    printf("                #                                                                               #  \n");
    printf("                #  IIIIIIII NNN   NN  GGGGG  EEEEEEE         .AAA.  RRRRRR. TTTTTTTT .SSSSS. TM #  \n");
    printf("                #    .II.   NNNN  NN GG. GGG EE.            AA. .AA R  `RR  `~~TT~~' ss'  ss    #  \n");
    printf("                #     II    NNNNN NN GG      EEEEEEE ====== AAAAAAA RRRRRR'    TT    `sss.      #  \n");
    printf("                #     II    NN NNNNN GG  GGG EE~~~~~ ====== AA~~~AA RR`RR      TT      `sss.    #  \n");
    printf("                #    .II.   NN  NNNN GG. .GG.EE.            AA   AA RR `RR.    TT    ss   ss    #  \n");
    printf("                #  IIIIIIII NN   NNN  GGGGG  EEEEEEE        AA   AA RR   RR    TT    `SSSSS'    #  \n");
    printf("                #                                                                               #  \n");
    printf("                #################################################################################  \n");
    printf("                #                               © copyright,  Calculadora de Inge (2015-2019)   #  \n");
    printf("                *                                                                               *  \n");
    printf("                *                                                                               *  \n");
    printf("                *                                  CALCULADORA:                                 *  \n");
    return 0;
}

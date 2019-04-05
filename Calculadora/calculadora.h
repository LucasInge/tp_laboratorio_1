#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

//Pide el Ingreso de dos Numeros:
int getNumber (int* numA, int* numB, char* msgA, char* msgB);//(PrimerNumero; SegundoNumero; "Primer mensaje"; "SegundoMensaje");
//Evalua los valores ingresados e imprime la SUMA de estos.
int sumNumber (int numA, int numB);
//Evalua los valores ingresados e imprime la RESTA de estos.
int subtractNumber (int numA, int numB);
//Evalua los valores ingresados e imprime la MULTIPLICACION de estos.
int MultiplicationNumber (int numA, int numB);
//Evalua los valores ingresados e imprime la DIVISION de estos.
int divitionNumber (int numA, int numB);
//Evalua los valores ingresados e imprime el factorial de cada uno.
int factorialNumber (int numA, int numB);
//LOGO
int logo (void);
#endif // CALCULADORA_H_INCLUDED

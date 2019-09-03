#include "OperacionesArismeticas.h"

int suma (int a, int b )       // La logica de la suma
{
    int resultado;

    resultado = a + b;

    return resultado;

}

int resta(int a, int b )      //Logica de la resta
{
    int resultado;

    resultado = a - b;

    return resultado;
}

int multiplicar(int a, int b)   //Logica de la multiplicacion
{
    int resultado;
    resultado = a*b;
    return resultado;
}

int division(int a, int b)  //logica de la division
{
    int resultado;

    resultado = (float)a / b;

    return resultado;


    }

int factorial (int a)   //logica del caso factorial
{
int resultado=1;
int i;


for (i=(int)a;i!=0;i--)
    {
    resultado= resultado * i;
    }

return (resultado);
}




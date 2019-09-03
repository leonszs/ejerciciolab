#include <stdio.h>
#include <stdlib.h>
#include "OperacionesArismeticas.h"

int main()
{
    int numero1;        //declaro las variables a utilizar
    int numero2;
    int total;
    char opcion;


    do {
        printf("Ingresar primer numero: \n");
        scanf("%d",&numero1);
            printf("Ingresar segundo numero: \n");
        scanf("%d",&numero2);
         printf("1 Si quiere Sumar  \n");
        printf("2 si quiere Restar\n");
        printf("3 Si quiere Multiplicar \n");
        printf("4 si quiere Dividir \n");          // pregunto al usuario que quiere realizar
                                                      //opciones
        printf("5 Si quiere sacar el Factorial \n");
        printf("6 Si desea Salir \n");
        fflush(stdin);
        scanf("%c" , &opcion);






        switch (opcion){

    case '1':
        total =  suma (numero1, numero2);
        printf("la suma es: %d + %d = %d   \n " , numero1, numero2, total );     // el caso suma

        break;

    case '2':
        total =   resta (numero1,numero2);
        printf("la resta es: %d - %d = %d     \n", numero1,numero2, total);   // el caso resta

        break;

    case '3':
        total =  multiplicar (numero1,numero2);
        printf("la multiplicacion es: %d * %d = %d   \n" ,numero1, numero2, total);   //el caso multiplicar

        break;


    case '4':
        if (numero2 != 0){
           total =   division (numero1, numero2);
           printf("la division es: %d / %d = %d  \n" ,numero1 , numero2 , total);  //el casi division

            }
            else {  printf("Error, no se puede dividir por 0   \n");}
            break;

case '5':
                if (numero1 >0)
                    {
                    total =   factorial(numero1);
                    printf("el factorial de: %d es: %d \n", (int) numero1,(int) total);   //el caso factorial

                    }
                else if (numero1==0)
                    {printf("el factorial de: 0 es: 1\n");

                    }
                else
                    {printf("no se puede sacar factorial de: %d porque es un numero negativo\n",(int)numero1);

                    }
                    if (numero2 >0)
                    {
                    total = factorial(numero2);
                    printf("el factorial de: %d es: %d \n",(int)numero2,(int)total);

                    }
                 else if (numero2==0)
                    {printf("el factorial de: 0 es: 1\n");

                    }
                else
                    {printf("no se puede sacar factorial de: %d porque es un numero negativo\n",(int)numero2);

                    }
                break;

    case '6':
        printf("usted salio...   \n");  // el usuario sale
        break;

        default: printf("opcion incorrecta   \n");



        }

        system("pause");
        system("cls");



            }while (opcion != '6');

            return 0;


}

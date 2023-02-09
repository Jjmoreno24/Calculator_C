/*2.	Elabore un programa que funcione como una calculadora con las operaciones b�sicas suma, resta, multiplicaci�n
        y divisi�n. 
        DESARROLLADO POR JOSE MORENO R.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

float n1, n2, result;
void consola_print()
{
    printf(" _________________________________________\n");
    printf("|                                         |\n");
    printf("|              CALCULADORA                |\n");
    printf("|                                         |\n");
    printf("|      [1]  SUMA                  (+)     |\n");
    printf("|      [2]  RESTA                 (-)     |\n");
    printf("|      [3]  MULTIPLICACION        (*)     |\n");
    printf("|      [4]  DIVISION              (/)     |\n");
    printf("|      [=]  RESULTADO             (=)     |\n");
    printf("|                                         |\n");
    printf("|_________________________________________|\n");
    sleep(4);
    system("cls");
}

void main()
{
    //bloque de declarativas
    char opcion;
    float suma, resta, multiplicacion, division, x;

    //Color y Impresion de consola 
    printf("\t    MENU DE OPCIONES\n");
    consola_print();
    printf("\n\t    Ingrese un N%cmero: ",163);
    scanf(" %f", &n1);
    printf(" _________________________________________\n");
    printf("|                                         |\n");
    printf("|                      ------             |\n");
    printf("|         N%cmero     | %.2f |            |\n",163,n1);
    printf("|                      ------             |\n");
    printf(" _________________________________________\n");
    
    //variables - contadores = 0
    result = 0;
    x = 0.0;

    //bloque de instrucciones
    do
        {
            consola_print();
    do
        { 
            printf("\n   Introduzca opcion : ", 162 );
            fflush( stdin );
            scanf("%c", &opcion);
        }

        while (opcion < '1' || opcion > '=');

        switch (opcion)
        {
            //Suma
            case '1': printf( "\n   Introduzca sumando: " );
                      scanf( "%f", &n2);
                      suma = n1 + n2;
                      result = suma;
                      printf(" _________________________________________\n");
                      printf("|                 SUMA                    |\n");
                      printf("|                                         |\n");
                      printf("|        ------           ------          |\n");
                      printf("|       | %.2f |   +    | %.2f |        |\n",n1, n2);
                      printf("|        ------           ------          |\n");
                      printf("|                                         |\n");
                      printf("|_________________________________________|\n");                  
                      break;

            //Resta
            case '2': printf( "\n   Introduzca sustraendo: ");
                      scanf( "%f", &n2);
                      resta = result - n2;
                      result = resta;
                      printf(" _________________________________________\n");
                      printf("|                 RESTA                   |\n");
                      printf("|                                         |\n");
                      printf("|        ------          ------           |\n");
                      printf("|       | ANS |     -   | %.2f |         |\n",n2);
                      printf("|        ------          ------           |\n");
                      printf("|                                         |\n");
                      printf("|_________________________________________|\n"); 
                      break;

            //multiplicacion
            case '3': printf( "\n   Introduzca  operando: ");
                      scanf( "%f", &n2);
                      multiplicacion = result*n2;
                      result = multiplicacion;
                      printf(" _________________________________________\n");
                      printf("|            MULTIPLICACION               |\n");
                      printf("|                                         |\n");
                      printf("|        ------          ------           |\n");
                      printf("|       | ANS |    *    | %.2f |         |\n",n2);
                      printf("|        ------          ------           |\n");
                      printf("|                                         |\n");
                      printf("|_________________________________________|\n"); 
                      break;

            //division
            case '4': printf( "\n   Introduzca divisor: ");
                      scanf( "%f", &n2);
                      division= result/n2;
                      result = division;
                      printf(" _________________________________________\n");
                      printf("|               DIVISION                  |\n");
                      printf("|                                         |\n");
                      printf("|        ------          ------           |\n");
                      printf("|       | ANS |    /    | %.2f |         |\n",n2);
                      printf("|        ------          ------           |\n");
                      printf("|                                         |\n");
                      printf("|_________________________________________|\n");
                        // valida que el divisor no sea 0
                      if ( n2 != 0 )
                          printf( "\n   Ans div %.2f = Ans\n", n2);
                      else
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" );
        }
    }
    while ( opcion != '=' );
    printf(" _________________________________________\n");
    printf("|               RESULTADO                 |\n");
    printf("|                                         |\n");
    printf("|                ------                   |\n");
    printf("|              |  %.2f  |                |\n",result);
    printf("|                ------                   |\n");
    printf("|_________________________________________|\n");
    
    return;
}

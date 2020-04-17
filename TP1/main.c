#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"

/************************************************
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte, que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
***********************************************/

int main()
{
    int operandoA ;
    int flagA = 0;
    int operandoB ;
    int flagB = 0;
    int opcion;
    int resultadoSuma;
    int resultadoResta;
    float resultadoDivision;
    int resultadoMultiplicacion;
    int resultadoFactorialA;
    int resultadoFactorialB;

//Menú
    do{
            if (flagA == 0){
                printf("\n 1. Ingresar primer operando(A = X)");
            } else{ printf("\n 1. Ingresar primer operando(A = %d) ", operandoA);}
            if (flagB == 0){
                printf("\n 2. Ingresar segundo operando (B = Y)");
            } else{ printf("\n 2. Ingresar segundo operando (B = %d) ", operandoB);}

            printf("\n 3. Calcular todas las operaciones \n 4. Informar resultados. \n 0. Salir \n ");

        opcion = getInt("Ingrese opcion: ");

    switch (opcion){

//Pido los valores de A y B
        case 1:
            operandoA = getInt("Ingrese el valor de A: ");
            system("cls");
            flagA = 1;
            break;

        case 2 :
            operandoB = getInt("Ingrese el valor de B: ");
            system("cls");
            flagB = 1;
            break;

//Calculo todos los resultados
        case 3 :
            if (flagA == 0 || flagB  == 0 ){
                printf("\n Ingresar los dos operandos antes de intentar calcular. \n");
                system("pause");
                system("cls");
            } else{
            resultadoSuma = calcularSuma(operandoA, operandoB);
            resultadoResta = calcularResta(operandoA, operandoB);
            resultadoDivision = calcularDivision(operandoA, operandoB);
            resultadoMultiplicacion = calcularMultiplicacion(operandoA, operandoB);
            resultadoFactorialA = calcularFactorial(operandoA);
            resultadoFactorialB = calcularFactorial(operandoB);
            printf("Calculos realizados.");
            system("pause");
            system("cls");
            }
            break;

//informo resultados
        case 4 :
            printf("El resultado de %d + %d es: %d \n", operandoA, operandoB, resultadoSuma);
            printf("El resultado de %d - %d es: %d \n", operandoA, operandoB, resultadoResta);
            printf("El resultado de %d * %d es: %d \n", operandoA, operandoB, resultadoMultiplicacion);
            printf("El resultado de %d / %d es: ", operandoA, operandoB);
            if (resultadoDivision == -1){
                printf("No se puede dividir por 0.");
            }else{ printf("%.2f", resultadoDivision);}
            printf("\nEl factorial de A es: %d y El factorial de B es: %d \n", resultadoFactorialA, resultadoFactorialB);

            system("pause");
            system("cls");

            break;

        case 0 :
            break;

        default:
            printf("No es una opción correcta");}

    }while (opcion != 0);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include"funciones.h"
/**
*\brief Pedir un número al usuario y mostrar mensaje
*\param Mensaje que se va a mostrar
*\return El número ingresado
*
*/
int getInt(char mensaje[]){
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    return numero;
}
/**
*\brief Sumar dos numeros previamente cargados
*\param Operandos a calcular
*\return Resultado de la suma
*
*/
int calcularSuma (int operandoA, int operandoB){
    int resultado = operandoA + operandoB;
    return resultado;
}
/**
*\brief Restar dos numeros previamente cargados
*\param Operandos a calcular
*\return Resultado de la resta
*
*/
int calcularResta(int operandoA, int operandoB){
    int resultado = operandoA - operandoB;
    return resultado;
}
/**
*\brief Multiplicar dos numeros previamente cargados
*\param Operandos a calcular
*\return Resultado de la multiplicación
*
*/
int calcularMultiplicacion(int operandoA, int operandoB){
    int resultado = operandoA * operandoB;
    return resultado;
}

/**
*\brief Dividir dos numeros previamente cargados
*\param Operandos a calcular
*\return Resultado de la división
*
*/
float calcularDivision(int operandoA , int operandoB){
   float resultadoDivision;

    if (operandoB == 0){
        resultadoDivision = -1;
    }else{
    resultadoDivision = (float)operandoA / operandoB;
    }

    return resultadoDivision;
}

/**
*\brief Calcular factorial de un numero previamente cargado
*\param Operando a calcular
*\return Resultado del factorial
*
*/
unsigned int calcularFactorial(int operando)
{
    unsigned int resultado;
    if (operando   == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = operando * calcularFactorial(operando -1);
    }
    return resultado;
}

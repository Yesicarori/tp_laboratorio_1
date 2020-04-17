#include"funciones.h"
int getInt(char mensaje[]){
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    return numero;
}

int calcularSuma (int operandoA, int operandoB){
    int resultado = operandoA + operandoB;
    return resultado;
}

int calcularResta(int operandoA, int operandoB){
    int resultado = operandoA - operandoB;
    return resultado;
}
int calcularMultiplicacion(int operandoA, int operandoB){
    int resultado = operandoA * operandoB;
    return resultado;
}
float calcularDivision(int operandoA , int operandoB){
   float resultadoDivision;

    if (operandoB == 0){
        resultadoDivision = -1;
    }else{
    resultadoDivision = (float)operandoA / operandoB;
    }

    return resultadoDivision;
}

 int calcularFactorial(int operando)
{
    int resultado;
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

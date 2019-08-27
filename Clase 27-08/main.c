#include <stdio.h>
#include <stdlib.h>
int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);
int main()
{
    int numero1;
    int numero2;
    int resultado;
    printf("Escriba un numero: ");
    scanf("%d", &numero1);
    printf("\nEscriba otro numero: ");
    scanf("%d", &numero2);

    resultado = sumar(numero1,numero2);
    printf("El resultado de la operacion SUMA es %d \n", resultado);

    resultado = restar(numero1,numero2);
    printf("El resultado de la operacion RESTA es %d \n", resultado);

    resultado = multiplicar(numero1,numero2);
    printf("El resultado de la operacion MULTIPLICACION es %d \n", resultado);

    return 0;
}

int sumar(int n1, int n2)
{
    return n1 + n2;
}
int restar(int n1, int n2)
{
    return n1 - n2;
}
int multiplicar(int n1, int n2)
{
    return n1 * n2;
}

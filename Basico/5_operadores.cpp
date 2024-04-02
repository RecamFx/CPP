#include <iostream>
using namespace std;

int main(){

    // Operadores de comparacion:
    // ">" //? Mayor que
    // "<"" //? Menor que
    // ">=" //? Mayor o igual que
    // "<=" //? Menor o igual que
    // "==" //? Igual que
    // "!=" //? No igual que

    // Operadores logicos:
    // "&&" o and //? Se usan en condiciones, si todas las condiciones se cumplen a la vez (devuelve True)
    // "||" o or //? Se usan en condiciones, si al menos una condicion o varias se cumplen (devuelve True)

    // Operadores arigmeticos
    // "%" //? Deuvelve el resto de la division de dos numeros

    //todo EJEMPLOS:
    //todo Si devuelve 1 es True, si devuelve 0 es False

    // Operadores de comparacion
    int opComparacion = 3>=0;
    cout<<opComparacion<<endl; //? 1

    // Operadores logicos
    int opLogicos = 10==10 and 40>30; // 10 es igual a 10 y 40 es mayor a 30, por ende es true
    cout<<opLogicos<<endl; //? 1

    int opLogicos2 = 10==3 or 40>30; // 10 no es igual a 3 pero 40 es mayor a 30, por ende es true
    cout<<opLogicos2<<endl; //? 1

    // Operadores arigmeticos
    int opArigmeticos = 10%4;
    cout<<opArigmeticos<<endl; //? 2

}
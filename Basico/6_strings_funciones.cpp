#include <iostream>
using namespace std;

int main(){

    // Los strings tienen posiciones, la cuales podemos acceder mediante corchetes
    // Ejemplo:
    // Si una string es "Hola", en la posicion 0 encontramos la "H", en la 1 la "o", en la 2 la "l" y finalmente en la 3 "a"
    // Como se usa: variable[posicion]

    string posiciones = "Hola";
    cout<<posiciones[0]<<endl; //? H


    // Metodos para strings:
    // Los metodos se usan: variable.metodo(parametros)
    // Los parametros a veces no son necesarios
    // .length() //? Se usa para leer la cantidad de caracteres que tiene un string (Solo para strings)
    // .size() //? Se usa para leer la cantida de caracteres que tiene una variable (Mas general, se usa para arrays, pero sirve para strings)

    string metodos = "Buenas";
    int caracteres = metodos.length();
    cout<<caracteres<<endl; //? 6


    // Modificar un caracter de un string
    // Para modificar el caracter debemos igualar ese caracter a el nuevo valor

    string editarString = "Buen Dia";
    editarString[3] = 'X';
    cout<<editarString<<endl; //? BueX Dia


    // Si queremso almacenar la letra en la posicion debemos utilizar char

    char letra = editarString[5];
    cout<<letra<<endl; //? D

}
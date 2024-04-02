#include <iostream>
using namespace std;

int main(){
    // El enld; sirve para poner fin a la linea, debido a que por defecto no deja espacios
    cout << "Hola mundo" << endl; //? Hola Mundo
    
    string variable = "";
    cin >> variable; // CIN sirve para pedirle al usuario que ingrese un dato via terminal
    cout << variable << endl; //? (Imprimimos el dato)


    // Concatenar:
    // Para concatenar en los cout usamos <<
    cout << "Esto es un ejemplo de concatenacion, lo que escribiste: "<< variable << endl; //? Esto es un ejemplo de concatenacion, lo que escribiste: (variable)
}
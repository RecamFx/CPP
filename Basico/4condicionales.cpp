#include <iostream>
using namespace std;

int main(){

    int pepidoEdad = 16;
    
    // IF:
    // ESTRUCTURA: if(condicion){codigo}
    // Los ifs ejecutan codigo si la condicion es verdadera o se cumple (True)

    // Se le puede agregar else: que dice que si no se cumple la funcion pasa a eso
    // Tambien se le pueden agregar los else if, que son elses normales con un if para verificar

    // En este ejemplo vamos a ver si la edad de pepito es mayor a 18
    // Si es asi vamos a escribir que es mayor, si no es asi vamos a escribir que es menor.

    if(pepidoEdad>18){
        cout<<"Pepito tiene mas de 18!"<<endl;
    } else if(pepidoEdad<18) {
        cout<<"Pepito tiene menos de 18!"<<endl;
    } else {
        cout<<"Pepito tiene 18!"<<endl;
    }

    // En este codigo verificamos si pepito tiene mas o menos de 18 de edad, en el caso de ninguno ser correcto pasa al else, porque?
    // Porque si no es mas o menos de 18 entonces es 18



    //todo----------------------------------------------------------------------------------------------------------------------------------//

    // WHILE:
    // ESTRUCTURA: while(condicion){codigo} 
    // Los while se ejecutan en bucle mientras la condicion sea verdadera o se cumpla (True)


    // En este ejemplo queremos crear un while para decirle que mientras la variable numero sea menor a diez que se imprima el valor y se le sume 1
    int numero = 0;

    while(numero < 10){
        cout<<"El numero es: "<<numero<<endl;
        numero++; // Usamos ++ para indicar que queremos que se incremente en 1 la variable numero
    }


}
#include <iostream>
using namespace std;

int main(){

    int pepidoEdad = 16;
    
    // IF:
    // ESTRUCTURA: if(condicion){codigo}
    // Se le puede agregar else: que dice que si no se cumple la funcion pasa a eso
    // Tambien se le pueden agregar los else if, que son elses normales con un if para verificar
    // Los ifs ejecutan codigo si la condicion se cumple
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

}
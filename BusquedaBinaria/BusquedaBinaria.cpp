// BusquedaBinaria.cpp 
// busqueda binaria mediante recursividad
//


#include <iostream>
#include"Busqueda.h"


using namespace std;



int main()
{

    int arreglo[] = {2,3,4,5,6,7,8,9,10}; // lista en la qye se busca
    int dato ; // dato a buscar

    // introduccion del datoa buscar
    cout << "introduce el numero a buscar en la lista " << endl;
    cin >> dato;


    int retorno = BusquedaBinaria(arreglo,dato,0,8);

    cout << "Busqueda binaria de un elemento en un arreglo ordenado\n\n";

    if (retorno == -1)

    {
        cout << "No se ha encontrado el elemento buscado" << endl;
    }
    else
    {
        cout << "Se ha encontrado el elemento buscado" << endl;
        cout << "El elemento " << dato << " se ha encontrado en la posicion " << retorno << " del arreglo "<<endl;
   
    }


    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}



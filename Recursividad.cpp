// Recursividad.cpp : Ejemplo de recurividad
// suma de todos lso numeros positivos enteros hasta uno dado
//


#include <iostream>

using namespace std;



long sumaEnteros(int n)
{
    // funcion de suma de todos los enteros hasta n
    // en este caso lo hacemos por recursividad

    if (n == 1)
    {
        return 1;
    }

    else
    {
        return n + sumaEnteros(n - 1);
    }

}





int main()
{
    int numero;

    cout << "Introduce el numero hasta donde hacer la suma:";
    cin >> numero;
    


    cout << "La suma de los enteros hasta   " << numero  << " es: " << sumaEnteros(numero) << endl;

    



    cout << "\nPulsa una tecla para terminar " << endl;
    cin.get();

    return 0;

}



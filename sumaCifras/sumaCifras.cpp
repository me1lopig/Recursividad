// sumaCifras.cpp 
// comparacion entre rcursion e iteracion
// uma de las cifras de un numero entero
//

#include <iostream>

using namespace std;


int sumaRecursiva(long n)
{
    if (n <= 9)
    {
        // caso base
        return n;
    }

    else
    {
        // caso recursivo
        return sumaRecursiva(n / 10) + n % 10;

    }

}


int sumaIterativa(long n)
{
    int suma = 0;
    // caso iterativo
    
    while (n%10 !=0) // condicion para detener el bucle
    {
        suma += (n % 10);
        n /= 10;
    }
    return suma;

}




int main()
{
    long numero;


    cout << "Calculo de la suma de las cifras de un numero" << endl;;
    cout << "Digita un numero entero : ";
    cin >> numero;

    cout << "Caso recursivo " << endl;
    cout << "La suma de las cifras de " << numero << " es: " << sumaRecursiva(numero) << endl;
    cout << endl;

    cout << "Para el caso iterativo " << endl;
    cout << "La suma de las cifras de " << numero << " es: " << sumaIterativa(numero) << endl;
    cout << endl;

    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();


    return 0;

    }



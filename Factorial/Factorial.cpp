// Factorial.cpp 
// calculo de un factorial de forma recursiva
//




#include <iostream>

using namespace std;



float Factorial(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        return n * Factorial(n - 1);
    }


}




int main()
{
    int numero;

    cout << "Introduce el numero para calcular el factorial ";
    cin >> numero;

    cout << "El factorial de " << numero << " es: " << Factorial(numero) << endl;


    cout << "\nPulsa una tecla para terminar " << endl;
    cin.get();

    return 0;

}



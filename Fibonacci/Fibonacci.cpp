// Fibonacci.cpp : Este archivo contiene la función "main". 

#include <iostream>

using namespace std;




long Fibonacci(int n)
{
    if ((n == 0) || (n == 1))
    {
        return 1;
    }

    else
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }


}









int main()
{
    int termino;


    cout << "Obtencion de terminos de la serie de Fibonacci"<<endl;

    cout << "introduce el termino que quieres obtener :";
    cin >> termino;

    cout << "El termino  " << termino << " de la serie de Fibonacci es " << Fibonacci(termino)<<endl;



    cout << "\nPulsa una tecla para terminar " << endl;
    cin.get();

    return 0;

}



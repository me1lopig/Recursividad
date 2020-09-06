// Fibonacci.cpp : Este archivo contiene la función "main". 

#include <iostream>

using namespace std;




long Fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
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

    cout << "introduce el numero de terminos que quieres obtener :";
    cin >> termino;

    for (int i = 0; i <= termino-1; i++)
    {
        cout << "El termino  " << i << " de la serie de Fibonacci es " << Fibonacci(i) << endl;
    }





    cout << "\nPulsa una tecla para terminar " << endl;
    cin.get();

    return 0;

}



// Problema de las ocho reinas
// colocar 8 reinas en un tablero sin que se ataquen
//ojo prototipar las funciones o colocarlar por orden inverso a la aparición

#include <iostream>
using namespace std;

// variables y constantes globales
const int N = 4; // numero de reinas y dimension del tablero
int reinas[N]; // vector para guardar resultados


// declaracion de funciones


bool valido(int i)
{
    // se comprueba si la reina de la columna i no se ve amenazada por otras que ya están colocadas 

    bool v = true;
    for (int r = 0; r < i; r++)
    {
        v = v && (reinas[i] != reinas[r]); // comprobamos si la fila está vacía 
        v = v && ((reinas[i] - i) != (reinas[r] - r)); // comprobamos si hay alguna reina en las diagonal 1
        v = v && ((reinas[i] + i) != (reinas[r] + r)); // comprobamos si hay alguna reina en las diagonal 2
    }
    return v;
}



void mostrarTablero()
{
    int tablero[N][N]; // definimos la matriz del arreglo

    // asignamos valores 0 a todo el tablero

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tablero[i][j] = 0; // asignamos el valor a los elementos del tablero
        }
    }

    // mostrar arreglo de reinas
    for (int i = 0; i < N; i++)
    {
        cout << reinas[i] << "|";
    }
    cout << endl;

    // asignanos el arreglo hacia el tablero

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tablero[reinas[j]][j] = 1; // asignamos el valor a los elementos del tablero
        }
    }

    cout << "\nMostrando el tablero" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << tablero[i][j] << "|"; // asignamos el valor a los elementos del tablero
        }
        cout << endl;
    }
    cout << endl;
}




void ponerReina(int i, bool& solucion)
{
    int k = 0; // inicializamos el conteo de movimientos
    solucion = false;

    do
    {
        reinas[i] = k; // copiamos la reina i en la fila k
        k++;
        mostrarTablero();


        if (valido(i))
        {
            if (i < (N - 1))
            {
                ponerReina(i + 1, solucion);
                // condicional para la vuelta atras
                if (!solucion)
                {
                    reinas[i] = 0; // volvemoa atras
                }
            }
            else
            {
                // ya agrefamos las reinas
                solucion = true; // la solucion es verdadera
            }
        }

    } while (!solucion && (k < N));

}





int main()
{
   
    bool solucion;

    ponerReina(0, solucion);

    if (solucion)
    {
        cout << "Si existe combiacion de reinas" << endl;
        mostrarTablero(); // se muestra tablero
    }

    else
    {
        cout << "No existe combinación de reinas" << endl;
    }

    cout << "Pulsa una tecla para salir del programa" << endl;
    cin.get();

    return 0;
}



// Problema de las ocho reinas
// colocar 8 reinas en un tablero sin que se ataquen
//

#include <iostream>
using namespace std;

// declaracion de funciones
void ponerReina(int i, bool& solucion)
{
    int k = 0; // inicializamos el conteo de movimientos
    solucion = false;

    do
    {
        reinas[i] = k; // copiamos la reina i en la fila k
        k++;
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


bool valido(int i)
{
    // se comprueba si la reina de la columna i no se ve amenazada por otras que ya están colocadas 

    bool v = true;
    for (int r = 0; r < i; r++)
    {
        v = v && (reinas[i] != reinas[r]); // comprobamos si la fila está vacía 
        v = v && ((reinas[i]-i) != (reinas[r]-r)); // comprobamos si hay alguna reina en las diagonal 1
        v = v && ((reinas[i] + i) != (reinas[r] + r)); // comprobamos si hay alguna reina en las diagonal 2
    }

}

const int N = 8; // numero de reinas
int reinas[N]; // vector para guardar resultados







int main()
{
   
   


    cout << "Pulsa una tecla para salir del programa" << endl;
    cin.get();

    return 0;
}



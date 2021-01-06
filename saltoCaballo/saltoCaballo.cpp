// aplicación de algoritmo del salto de caballo
//

#include <iostream>

using namespace std;

const int N = 5; // dimensión del tablero de ajedrez
int tablero[N][N]; // creamos el tablero de ajedrez

// desplazamientos relativos del caballo
int d[8][2] = { {2,1},{1,2},{-1,2},{2,-1},{-1,-2},{-2,-1},{1,-2},{-2,1} };

void escribirTablero()
{
    // representamos el tablero
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << tablero[i][j] << "|";
        }
        cout << endl;
    }
    cout << endl;
}


void saltoCaballo(int i,int x,int y,bool &exito)
{
    int nx, ny; // variables para almacenar los saltos
    int k = 0; // iterador para controlar los desplazamientos en el tablero
    exito = false; // inicializamos exito el false


    do
    {
        // el bucle funciona mientras no hallamos terminado el número de movimientos y no tengamos exito

        k++;

        // variación de coordenadas de salto
        nx = x + d[k - 1][0];
        ny = y + d[k - 1][1];
            
        // verificación de que las coordenadas son las correctas y no se han visitado antes
        // en el tablero se marca si la casilla si se ocupa por el caballo

        if ((nx >= 0) && (nx < N) && (ny >= 0) && (ny < N) && (tablero[nx][ny]==0))
        {
            // guardamos el movimiento
            tablero[nx][ny] = i;
            escribirTablero(); // escribimos el tablero actualizado activarlo opcionalmente

            if (i < N * N)
            {
                saltoCaballo(i + 1, nx, ny, exito);

                if (!exito)
                {
                    tablero[nx][ny] = 0; // deshacemoa el valor del salto
                }
            }
            else
            {
                exito = true;
            }
        }


    } while ((k < 8) && !exito);

 }




int main()
{
    bool exito;
    // posicion inicial del caballo
    int fila=1, col=0;

    tablero[fila][col] = 1; // posicion inicial 
    saltoCaballo(2,fila,col,exito);

    if (exito)
    {
        cout << "Camino encontrado " << endl;
        escribirTablero();
    }
    else
    {
        cout << "Camino no encontrado" << endl;

    }

    cout << "Pulsa una tecla " << endl;
    cin.get();

    return 0;
}



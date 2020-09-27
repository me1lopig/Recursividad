#pragma once


int BusquedaBinaria(int a[], int dato, int inferior, int superior)
{

	int mitad;

	if (inferior > superior)
	{
		// no se ha encontrado el elemento
		// se retorna un valor -1
		return -1;
	}

	else
	{
		mitad = (superior + inferior) / 2;

		if (dato == a[mitad])
		{
			// caso base hemos econtrado el dato buscado
			return mitad;

		}
		else if (dato > a[mitad])
		{ 
			return BusquedaBinaria(a, dato, mitad + 1, superior);
		}

		else
		{
			return BusquedaBinaria(a, dato, inferior, mitad - 1);
		}


	}

}

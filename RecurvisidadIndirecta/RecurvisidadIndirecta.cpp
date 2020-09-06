// RecurvisidadIndirecta.cpp 
// ejemplo de recursividad indirecta
// se muestran los elementos del alfabeto
//

#include <iostream>

using namespace std;

// definicion de las funciones en las que se va a aplicar la recursividad

void FuncionA(char letra)
{
    if (letra == 'A')
    {
        FuncionB(letra);
    }

    cout << letra << "  "<<endl;
}



void FuncionB(char letra)
{
    
    FuncionA(--letra);

}


int main()
{
    cout << "Ejemplo de recursividad "<<endl;
    cout << "Elementos del alfabeto " << endl;
    FuncionA('Z');
    cout << endl;




    cout << "\nPulsa una tecla para terminar " << endl;
    cin.get();

    return 0;
}



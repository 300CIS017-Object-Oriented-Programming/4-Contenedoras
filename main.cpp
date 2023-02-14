#include <iostream>
#include "Perro.h"
#include "Refugio.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

void mostrarMenu(Refugio * refugio)
{
    int opc = 0;
    do
    {
        cout << "\n ****Bienvenidos ****\n";
        cout << "1. Agregar perro  al vector \n";
        cout << "2. Mostrar perros  \n";
        cout << "-1. Salir \n";

        cin >> opc;

        switch (opc)
        {
            case 1: {
                string nombrePerroTemp, colorTemp, razaTemp;
                int idPerro;
                cout << "Ingresa el id del perro " << endl;
                cin >> idPerro;
                cout << "Ingresa el nombre del perro " << endl;
                cin.ignore();
                getline(cin, nombrePerroTemp, '\n');
                cout << "Ingresa el color del perro " << endl;
                cin >> colorTemp;
                cout << "Ingresa la raza del perro " << endl;
                cin >> razaTemp;
                refugio->agregarPerro(idPerro, nombrePerroTemp, colorTemp, razaTemp);
                break;
            }
            case 2: refugio->mostrarPerros();
                break;
            default:
                break;
        }
    } while (opc != -1);
}


int main() {

    // Instanciar el Refugio - Puede estar en el stack pq es una variable que será local al main
    Refugio * pRefugio= new Refugio("Mi guarida feliz");
    mostrarMenu(pRefugio);
    delete pRefugio;
    return 0;
}

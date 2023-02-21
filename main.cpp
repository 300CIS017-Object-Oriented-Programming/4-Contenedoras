#include <iostream>
#include "Perro.h"
#include "Refugio.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

void primeraOpcion(Refugio* refugio) {
    string nombreTemp, razaTemp, tamanioTemp, colorTemp;
    int edadTemp;
    cout << "Ingresa la edad del perro " << endl;
    cin >> edadTemp;
    cout << "Ingresa el nombre del perro " << endl;
    cin.ignore();
    getline(cin, nombreTemp, '\n');
    cout << "Ingresa la raza del perro " << endl;
    cin.ignore();
    getline(cin, razaTemp, '\n');
    cout << "Ingresa el tamanio del perro " << endl;
    cin >> tamanioTemp;
    cout << "Ingresa el color del perro " << endl;
    cin >> colorTemp;
    refugio->recibirPerro(edadTemp, nombreTemp, razaTemp, tamanioTemp, colorTemp);
}

void terceraOpcion(Refugio* refugio) {
    int idPerro;
    cout << "Ingresa el ID del perro " << endl;
    cin >> idPerro;
    cout << refugio->buscarPerro(idPerro) << endl;
}

void cuartaOpcion(Refugio* refugio) {
    int edadPerros;
    cout << "Ingresa la edad de los perros a buscar " << endl;
    cin >> edadPerros;
    refugio->listarPerrosPorEdad(edadPerros);
}

void quintaOpcion(Refugio* refugio) {
    int idPerro;
    cout << "Ingresa el ID del perro a borrar " << endl;
    cin >> idPerro;
    refugio->darPerroEnAdopcion(idPerro);
}

void mostrarMenu(Refugio* refugio) {
    int opc = 0;
    do
    {
        cout << "\n**** Bienvenidos al refugio - " << refugio->getNombre() << " ****\n";
        cout << "1. Registrar un nuevo perro\n";
        cout << "2. Mostrar todos los perros disponibles\n";
        cout << "3. Buscar un perro\n";
        cout << "4. Listar perros por edad\n";
        cout << "5. Dar un perro en adopcion\n";
        cout << "0. Salir\n" << endl;

        cin >> opc;

        switch (opc)
        {
            case 1:
                primeraOpcion(refugio);
                break;
            case 2:
                refugio->mostrarPerros();
                break;
            case 3:
                terceraOpcion(refugio);
                break;
            case 4:
                cuartaOpcion(refugio);
                break;
            case 5:
                quintaOpcion(refugio);
                break;
            default:
                break;
        }
    } while (opc != 0);
}

int main() {
    Refugio* pRefugio= new Refugio("Mi mascota feliz");
    mostrarMenu(pRefugio);

    // Debo usar el delete explicitamente cuando tengo objetos creados en el heap, ya que estos no se eliminan automáticamente.
    delete pRefugio;
    return 0;
}
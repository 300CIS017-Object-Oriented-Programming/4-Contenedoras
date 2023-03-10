#include "Refugio.h"

Refugio::Refugio(string nombre) : acumPerros(1), nombre(nombre) {}

Refugio::~Refugio() {
    // Recorremos el vector para eliminar los objetos. No sería necesario recorrer el map ya que se almacenaban los
    // mismos objetos y la referencia ya no existiría.
    for (int indexVector = 0; indexVector < this->bdPerros.size(); indexVector++) {
        delete this->bdPerros[indexVector];
    }

    cout << "\n¡Gracias por visitarnos!" << endl;
}

void Refugio::recibirPerro(int edad, string nombre, string raza, string tamanio, string color) {
    // Creo el objeto perro que voy a pasar a mi contenedor.
    Perro* pPerroTemp = new Perro(this->acumPerros, edad, nombre, raza, tamanio, color); // Creado en el heap

    // Agregar el objeto al final de un vector.
    this->bdPerros.push_back(pPerroTemp);

    // Agregar el objeto a un map de dos formas: Definiendo manualmente la llave o creando un par llave + referencia.
    //this->mapaPerros[id] = pPerroTemp;
    this->mapaPerros.insert(make_pair(this->acumPerros, pPerroTemp));

    this->acumPerros++;
}

void Refugio::mostrarPerros() {
    vector<Perro*>::iterator itVector;
    unordered_map<int, Perro*>::iterator itMap;

    cout << "Los perros en el refugio son:\n";
    cout << "\nVECTOR\n";
    for (itVector = this->bdPerros.begin(); itVector != this->bdPerros.end(); ++itVector){
        Perro* pPerroTemp = *itVector;
        cout << pPerroTemp->getNombre() << endl;

        // Opción con menor uso de memoria
        //cout << (*itVector)->getNombre() << endl;
    }

    // Otra forma de acceder a los elementos de un vector sin usar iterator, manejando directamente el índice.
    /*for (int indexVector = 0; indexVector < this->bdPerros.size(); indexVector++) {
        Perro * pPerroTemp = this->bdPerros[indexVector];
        cout << pPerroTemp->getNombre() << endl;
    }*/

    cout << "\nMAP\n";
    for (itMap = this->mapaPerros.begin(); itMap != this->mapaPerros.end(); ++itMap){
        int llave = itMap->first;
        Perro* pPerroTemp = itMap->second;
        cout << "El perro de id " << llave << ", se llama " << pPerroTemp->getNombre() << endl;

        // Opción con menor uso de memoria
        //cout << "El perro de id " << itMap->first << ", se llama " << itMap->second->getNombre() << endl;
    }
}

bool Refugio::buscarPerro(int id) {
    vector<Perro*>::iterator itVector;

    for (itVector = this->bdPerros.begin(); itVector != this->bdPerros.end(); ++itVector){
        if ((*itVector)->getId() == id) {
            return true;
        }
    }

    return false;
}

void Refugio::listarPerrosPorEdad(int edad) {
    // Otra forma de acceder a los elementos de un vector sin usar iterator, manejando directamente el índice.
    for (int indexVector = 0; indexVector < this->bdPerros.size(); indexVector++) {
        if (this->bdPerros[indexVector]->getEdad() > edad) {
            cout << this->bdPerros[indexVector]->getNombre() << " es mayor a " << edad << " anios" << endl;
        }
    }
}

void Refugio::darPerroEnAdopcion(int id) {
    this->mapaPerros.erase(id);
}

int Refugio::getAcumPerros() {
    return this->acumPerros;
}

string Refugio::getNombre() {
    return this->nombre;
}

void Refugio::setNombre(string nombre) {
    this->nombre = nombre;
}
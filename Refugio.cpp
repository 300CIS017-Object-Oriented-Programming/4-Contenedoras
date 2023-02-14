//
// Created by lufe0 on 14/02/2023.
//

#include "Refugio.h"

Refugio::Refugio(std::string nombre) : nombre(nombre) {
}

void Refugio::agregarPerro(int idPerro, std::string nombre, std::string color, std::string raza) {

    Perro * pPerroTemp = new Perro(idPerro, nombre, color, raza); // Heap

    // Agrega el perro en el vector y en el mapa
    bdPerros.push_back(pPerroTemp);

    mapaPerros[idPerro] = pPerroTemp;
    mapaPerros.insert(make_pair(idPerro, pPerroTemp));
}

void Refugio::mostrarPerros() {
    vector <Perro*> :: iterator it;
    unordered_map <int, Perro*> :: iterator itMap;
    for  (it = bdPerros.begin(); it != bdPerros.end(); ++it ){
            Perro * pPerroTemp = *it;
            cout << pPerroTemp->getNombre() << endl;
    }

    for (auto pPerro: bdPerros){
        cout << pPerro->getNombre() << endl;
    }

    while (it!=bdPerros.end()){
        Perro * pPerroTemp = *it;
        cout << pPerroTemp->getNombre() << endl;
        ++it;
    }

    for  (itMap = mapaPerros.begin(); itMap != mapaPerros.end(); ++itMap ){
         int llave = itMap->first;
         Perro * pPerroTemp = itMap->second;
        cout << "El perro de id " << llave << "Se llama " << pPerroTemp->getNombre() << endl;
        cout << "El perro de id " << itMap->first << "Se llama " << itMap->second->getNombre() << endl;
    }
}


std::string Refugio::getNombre() {
    return nombre;
}

void Refugio::setNombre(std::string nombre) {
    this->nombre = nombre;
}



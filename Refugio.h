//
// Created by lufe0 on 14/02/2023.
//

#ifndef INC_4_CONTENEDORAS_REFUGIO_H
#define INC_4_CONTENEDORAS_REFUGIO_H

#include <iostream>
#include <vector>
#include <iterator>
#include <unordered_map>
#include "Perro.h"

using std::unordered_map;
using std:: make_pair;
using std::vector;
using std::iterator;
using std::string;
using std::cout;
using std::endl;


class Refugio {
    string nombre;
    vector<Perro*> bdPerros;
    unordered_map<int, Perro*> mapaPerros;

public:
    Refugio(std::string nombre);
    void agregarPerro(int idPerros, string nombre, string color, string raza);
    void mostrarPerros();

    std::string getNombre();

    void setNombre(std::string nombre);

};


#endif //INC_4_CONTENEDORAS_REFUGIO_H

//
// Created by lufe0 on 31/01/2023.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>

class Perro {
private:
    int id;
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;

public:
    Perro();

    Perro(int id, int edad, std::string nombre, std::string raza, std::string tamanio,
                 std::string color);

    Perro(int id,std::string nombre,std::string raza, std::string color);

    void ladrar();
    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif

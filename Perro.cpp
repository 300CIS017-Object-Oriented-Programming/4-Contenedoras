#include "Perro.h"
#include <iostream>


// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro() {
    this->id = 0;
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}

Perro::Perro(int id, int edad, std::string nombre, std::string raza, std::string tamanio,
             std::string color) : id(id), edad(edad), nombre(nombre), raza(raza), tamanio(tamanio), color(color) {}

Perro::Perro(int id, std::string nombre, std::string raza, std::string color) : nombre(nombre), raza(raza),
                                                                                             color(color) {}


void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}


int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}





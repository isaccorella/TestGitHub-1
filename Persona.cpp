#include "Persona.h"
Persona::Persona(int edad = 0, string nombre = "", string id = "") : edad(edad), nombre(nombre), id(id) {}
string Persona::toString(){
    stringstream s;

    s << nombre << id << edad;

    return s.str();
}
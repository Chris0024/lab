#include "Estudiante.h"

Estudiante::Estudiante()
{
    nombre = " ";
    apellido = " ";
    codigo= " ";
}
Estudiante::Estudiante(string nombre ,string apellido , string codigo)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->codigo= codigo;
}
string Estudiante::getnombre(){
    return nombre;
}
string Estudiante::getapellido(){
    return apellido;
}
string Estudiante::getcodigo(){
    return codigo;
}
/*
Estudiante::~Estudiante()
{
    //dtor
}
*/

#include "Curso.h"

Curso::Curso()
{
    //ctor
}
Curso::Curso(string nombre,string codigo, Estudiante* alumnos , int ca){

    this ->nombre = nombre;
    this ->codigo = codigo;
    this ->alumnos = alumnos;
    this ->cantidadAlumnos = ca;
}
string Curso::getnombre(){
    return nombre;
}
string Curso::getcodigo(){
    return codigo;
}
Estudiante* Curso::getalumno(){
    return alumnos;
}


void Curso::setnombre(string nombre){
    this->nombre=nombre;
}
void Curso::setcodigo(string codigo){
    this->codigo = codigo;
}
void Curso::setcantidadAlumnos(int ca){
    this->cantidadAlumnos = ca;
}
void Curso::setArrayEstudiantes(Estudiante alumnos[]){
    this->alumnos= alumnos;
}


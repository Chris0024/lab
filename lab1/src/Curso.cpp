#include "Curso.h"

Curso::Curso()
{
    //ctor
}
Curso::Curso(string nombre,string codigo, Estudiante* alumnos , int ca){

    this ->nombre = nombre;
    this ->codigo = codigo;
    this ->cantidadAlumnos = ca;
    this ->alumnos = new Estudiante[ca];

}
Curso::Curso(const Curso& old_curso){
    //cantidadAlumnos = old_curso.getcantidadAlumnos();
    this->alumnos = new Estudiante[old_curso.cantidadAlumnos];
    this->nombre = old_curso.nombre;
    this->codigo = old_curso.codigo;
    for(int i=0;i<2;i++){
        this->alumnos[i]=old_curso.alumnos[i];
    }
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
unsigned int Curso::getcantidadAlumnos(){
    return cantidadAlumnos;
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
Curso::~Curso(){
    delete []alumnos;
}

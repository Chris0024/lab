#include "Empleado.h"
#include <string>

Empleado::Empleado()
{
    //ctor
}

Empleado::Empleado(string nombre ,string apellido,double salario){
    this-> nombre = nombre;
    this-> apellido = apellido ;

    if(salario<0){
        this->salario=0;
    }
    else{
        this-> salario = salario;
    }
}
Empleado::Empleado(Empleado& old_E){
    this->nombre = old_E.nombre;
    this->apellido = old_E.apellido;
    this->salario = old_E.salario;
}

string Empleado::getapellido(){
    return this->apellido;
}
string Empleado::getnombre(){
    return this->nombre;
}
double Empleado::getsalario(){
    return salario;
}
double Empleado::getsalarioanual(){
    return salario*12;
}
void Empleado::setsalario(double salario){
    this->salario = salario;
}

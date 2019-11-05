#ifndef CURSO_H
#define CURSO_H
#include "Estudiante.h"
using namespace std;
class Curso
{
    public:
        Curso();
        Curso(string ,string ,Estudiante*, int);

        string getnombre();
        string getcodigo();
        int getcantidadAlumnos();
        Estudiante* getalumno();

        void setnombre(string);
        void setcodigo(string);
        void setcantidadAlumnos(int);
        void setArrayEstudiantes(Estudiante[]);



    private:
        string nombre;
        string codigo;
        Estudiante *alumnos;
        int cantidadAlumnos;
};

#endif // CURSO_H

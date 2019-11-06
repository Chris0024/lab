#ifndef CURSO_H
#define CURSO_H
#include "Estudiante.h"
using namespace std;
class Curso
{
    public:
        Curso();
        Curso(string ,string ,Estudiante*, int);
        Curso(const Curso&);
        ~Curso();

        string getnombre();
        string getcodigo();
        unsigned int getcantidadAlumnos();
        Estudiante* getalumno();

        void setnombre(string);
        void setcodigo(string);
        void setcantidadAlumnos(int);
        void setArrayEstudiantes(Estudiante[]);


    private:
        string nombre;
        string codigo;
        Estudiante *alumnos;
        unsigned int cantidadAlumnos;
};

#endif // CURSO_H

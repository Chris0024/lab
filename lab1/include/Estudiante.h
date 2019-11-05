#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
using namespace std;
class Estudiante
{
    public:
        Estudiante();
        Estudiante(string,string,string);
        string getnombre();
        string getapellido();
        string getcodigo();
    private:
    string nombre;
    string apellido;
    string codigo;
};

#endif // ESTUDIANTE_H

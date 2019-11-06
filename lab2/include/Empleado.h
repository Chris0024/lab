#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
using namespace std;

class Empleado
{
    public:
        Empleado();
        Empleado(string , string ,double);
        Empleado(Empleado&);
        string nombre;
        string apellido;
        double salario;

        void setsalario(double);

        string getnombre();
        string getapellido();
        double getsalario();
        double getsalarioanual();

};

#endif // EMPLEADO_H

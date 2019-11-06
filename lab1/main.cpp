#include <iostream>
#include <string>
#include "Estudiante.h"
#include "Curso.h"
using namespace std;

int main()
{
    Estudiante jose("jose","pacori","666");
    Estudiante marcos("marcos","marcuuus","100");
    Estudiante promocion[2]={jose,marcos};
/*
    cout <<jose.getnombre()<<" "<<jose.getapellido()<<endl;
    cout <<marcos.getnombre()<<" "<<marcos.getapellido()<<endl;
*/
    Curso calculo("calculo","137",promocion,2);
    Curso prog("program","245",promocion,2);

    Curso comu = calculo;
    cout <<calculo.getnombre()<<" "<<calculo.getcodigo()<<" "<<calculo.getalumno()<<endl;
    //cout << comu.getnombre()<<endl;


    return 0;
}

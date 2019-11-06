#include <iostream>
#include "Empleado.h"
using namespace std;
void cambio(Empleado &a,Empleado &b){
    Empleado temporal = a;
    a = b;
    b = temporal;
}
void sortEmpleados(Empleado arr[], int tam){
    int i,j;
    for(i=0;i<tam-1;i++){
        for(j=0;tam-j-i;j++){
            if(arr[j].apellido>arr[j+1].apellido)
                cambio(arr[j],arr[j+1]);
        }
    }
}
void printEmpleados(Empleado arr[],int tam){
    for(int i = 0; i <tam ; i++){
        cout << arr[i].getnombre() <<endl;
    }
}
int main()
{

    Empleado n1("Arnold","A",5500);
    Empleado n2("Bector","B",7000);
    Empleado n3("cosmo","C",4000);
    Empleado n4("zypher","z",4000);

    /*
    cout <<"el salario anual es "<< n1.getsalarioanual()<<endl;
    cout <<"el salario anual es "<< n2.getsalarioanual()<<endl;

    n1.setsalario(n1.getsalario()*0.9);
    n2.setsalario(n2.getsalario()*0.9);


    cout <<"el salario anual es "<< n1.getsalarioanual()<<endl;
    cout <<"el salario anual es "<< n2.getsalarioanual()<<endl;
    */

    int tam_grupo = 4;
    Empleado grupo[tam_grupo]={n2,n4,n3,n1};
    cout << " Antes "<<"\n\n";
    printEmpleados(grupo,tam_grupo);
    cout << "\n\n";
    sortEmpleados(grupo,tam_grupo);
    cout << " Despues "<<"\n\n";
    printEmpleados(grupo,tam_grupo);




    return 0;
}

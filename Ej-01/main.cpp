#include <iostream>
#include "GrafoMatriz.h"

using namespace std;

int main() {
    GrafoMatriz<string> gr(4);
    gr.nodo_agregar(0, "hola");
    gr.nodo_agregar(1, "wacho");
    gr.nodo_agregar(2, "todo");
    gr.nodo_agregar(3, "liso?");

    gr.arco_agregar(0,2,3);
    gr.arco_agregar(0,1,2);
    gr.arco_agregar(1,0,3);
    gr.arco_agregar(2,1,5);

    cout << "ady 0-1" << gr.adyacentes(0,1)<<endl;
    cout << "ady 0-1" << gr.adyacentes(1,2)<<endl;
    cout << "ady 0-1" << gr.adyacentes(2,3)<<endl;
    cout << "ady 0-1" << gr.adyacentes(1,3)<<endl;

    std::cout << "Ejercicio 07/01\n" << std::endl;
    return 0;
}
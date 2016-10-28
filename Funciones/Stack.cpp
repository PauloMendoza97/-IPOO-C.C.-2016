#include <iostream>
#include <stack>
//La clase stack posee únicamente cinco métodos8
using namespace std;

int main()
{
    stack<char> M;
    //M.push(): Agrega un elemento en el tope del stack
    //M.top(): Regresa el último elemento en el stack
    cout<<"Elementos de la Pila: "<<endl;
    for(int i='a';i<'z';i++){
        M.push(i);
        cout<<M.top()<<",";
    }
    //M.size(): Regresa el numero de elementos en el stack
    cout<<"\nEl numero de elementos de la pila es: "<<M.size()<<endl;
    for(int i=0;i<15;i++){
        cout<<M.top()<<",";
        M.pop();
    }
    cout<<"\nEl numero de elementos de la pila despues de borrar 15 elementos es: "<<M.size()<<endl;
    //M.empty(): Cierto (true) si el stack está vacio
    cout<<"Devuelve TRUE si esta vacio el vector: "<<M.empty()<<endl;

    return 0;

}




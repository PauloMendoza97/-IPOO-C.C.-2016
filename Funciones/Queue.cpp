#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<char> B;
    //M.push(): Agrega un elemento en el tope del stack
    //M.back(): Regresa el último elemento en el stack
    cout<<"Elementos de la cola: "<<endl;
    for(int i='a';i<'z';i++){
        B.push(i);
        cout<<B.back()<<",";
    }
    //M.front(): Regresa una referencia al primer elemento en la cola
    cout<<"\nPrimer elemento de la cola: " <<B.front()<<endl;
    //M.size(): Regresa el numero de elementos en el cola
    cout<<"El numero de elementos de la cola es: "<<B.size()<<endl;
    cout<<"El ultimo elemento de la cola es: "<<B.front()<<endl;
    //B.pop(): borra el elemento del frente de la cola
    B.pop();
    cout<<"Eliminamos el ultimo elemento de la cola: "<<B.front()<<endl;
    //B.empty():Cierto (true) si la cola está vacia
    cout<<"\nDevuelve TRUE si esta vacio el vector: "<<B.empty()<<endl;



}

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> L;
    cout<<"Cantidad de elementos de la lista: "<<L.size()<<endl;
    //L.max_size()
    cout<<"Cantidad maxima de elementos de la lista: "<<L.max_size()<<endl;

    //list<int> lista={7,5,2,3};
    int lista[] = {75,23,65,42,13};
   list<int> li(lista,lista+5);

    //M.front(): Regresa una referencia al primer elemento en la fila
    cout<<"\nPrimer elemento de la fila: " <<li.front()<<endl;
    //M.back(): Regresa una referencia al ultimo elemento en la fila
    cout<<"\nUltimo elemento de de la fila: " <<li.front()<<endl;

   cout << '\n';

   return 0;

}

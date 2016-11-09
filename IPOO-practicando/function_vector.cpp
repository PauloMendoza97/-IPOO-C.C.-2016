#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    //vector<int> A(20,9); -- otra manera de inicializar vectores
    int vect[] = {4,3,2,7,1,12,4,5};
    vector<int> A (vect, vect+8);
    //A.size( ): devuelve el número de componentes en el vector
    cout<<"El tamanio del vector es: "<<A.size()<<endl;
    //A.pop_back():añade un elemento al final del vector
    A.pop_back();
    cout<<"\nEliminamos el ultimo elemento del vector con pop_back: "<<endl;
    for(int i=0;i<A.size();i++)
        cout<<A[i]<<"  ";
    //A.push_back(12):añade un elemento al final del vector
    A.push_back(12);
    cout<<"\nInsertamos 12 al final del vector con push_back: "<<endl;
    for(int i=0;i<A.size();i++)
        cout<<A[i]<<"  ";
    //sort( , ):disibuye aleatoriamente los elementos del vector entre el rango dado
    cout<<"\nOrdenamos los 5 primeros elementos del vector en forma ascendente con sort: "<<endl;
    sort(A.begin(),A.begin()+5);
    for(int i=0;i<A.size();i++)
        cout<<A[i]<<"  ";
    return 0;
}

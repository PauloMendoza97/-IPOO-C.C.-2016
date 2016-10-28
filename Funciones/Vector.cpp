#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector<int> A;
    vector<int> A(20,9);
    //A.size( ): devuelve el número de componentes en el vector
    cout<<"El tamanio del vector es: "<<A.size()<<endl;
    //A.resize(7):cambia el tamaño del vector
    A.resize(7);
    cout<<"El nuevo tamanio del vector es: "<<A.size()<<endl;
    cout<<"El tercer elemento del vector es: "<<A[2]<<endl;
    //A.erase( , )Eelimina elementos del vector
    //A.begin( ):Devuelve un iterador al principio del vector
    A.erase(A.begin()+3,A.begin()+6);
    cout<<"El tamanio del vector despues de borrar es: "<<A.size()<<endl;
    //A.insert( , ):insertar componentes en el vector
    A.insert(A.begin()+3,7);
    cout<<"Insertamos 7 en la posicion 4: "<<endl;
    for(int i=0;i<A.size();i++)
        cout<<A[i]<<"  ";
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
    //insertamos el valor 2 en la tercera posición del array
    cout<<"\nUsar -1 en el metodo sobrecargado: "<<endl;
    A.insert(A.begin()+4,3,-1);
    for(int i=0;i<A.size();i++)
        cout<<A[i]<<"  ";
    //A.clear(): Elimina todos los elementos del vector
    A.clear();
    cout<<"\nEl nuevo tamanio del vector es: "<<A.size()<<endl;
    //A.empty:true si el vector está vacio
    cout<<"Devuelve TRUE si esta vacio el vector: "<<A.empty()<<endl;
    vector<int> B(10,8);
    //swap(A,B): Intercambia el contenido de un vector con el de otro
    swap(A,B);
    cout<<"El vector intercambiando con uno nuevo es: "<<endl;
     for(int i=0;i<A.size();i++)
        cout<<A[i]<<"  ";

    return 0;
}

#include <iostream>
using namespace std;

template<typename T>

void hi(const T x)
{
    int entero;
    entero=x;
    if(x-entero==0)
    {
        if(x>0)
            cout<<"El numero es un entero positivo."<<endl;
        else
            cout<<"El numero es un entero negativo."<<endl;
    }
    else if(x-entero>0)
        cout<<"El numero es un flotante positivo."<<endl;
    else
        cout<<"El numero es un flotante negativo."<<endl;

}

int main()
{
    double num;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;

    hi<double>(num);

    return 0;
}

#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal()
{
    edad=0;
}
void Animal::hablar()
{
	cout << "Animal habla" << endl;
}
void Animal::mover()
{
	cout << "Animal se mueve " << endl;
}
void Animal::moverCola()
{
    cout << "Animal moviendo cola ... " << endl;
}

//Mamifero
Mamifero::Mamifero() : Animal()
{
}
void Mamifero::hablar()
{
	cout << "Mamifero habla" << endl;
}
void Mamifero::mover()
{
	cout << "Mamifero se mueve 5 pasos..."<< endl;
}
void Mamifero::moverCola()
{
	cout << "Mamifero moviendo cola ... " << endl;
}

//Reptil
Reptil::Reptil() : Animal()
{
}
void Reptil::hablar()
{
	cout << "Reptil habla" << endl;
}
void Reptil::mover()
{
	cout << "Reptil se mueve 5 pasos..."<< endl;
}
void Reptil::moverCola()
{
	cout << "Reptil moviendo cola ... " << endl;
}

//ve
Ave::Ave() : Animal()
{
}
void Ave::hablar()
{
	cout << "Ave habla" << endl;
}
void Ave::mover()
{
	cout << "Ave se mueve 5 pasos..."<< endl;
}
void Ave::moverCola()
{
	cout << "Ave moviendo cola ... " << endl;
}

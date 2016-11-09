#include "Animal.cpp"

using namespace std;

int main()
{
    Animal h;
    h.hablar();
    h.mover();
    h.moverCola();

    cout << "***********" << endl;
	//Dinamica
	Animal *Lobo;
	Lobo = new Mamifero();
	Lobo->hablar();
	Lobo->mover();
	Lobo->moverCola();
	delete Lobo;

    cout << "***********" << endl;

    Animal *unAnimal[4];
    unAnimal[0] = new Animal();
    unAnimal[1] = new Mamifero();
    unAnimal[2] = new Reptil();
    unAnimal[3] = new Ave();

    for(int i = 0; i < 4; i++) {
        unAnimal[i]->hablar();
        unAnimal[i]->mover();
        unAnimal[i]->moverCola();
        cout<<endl;
    }

	return 0;
}

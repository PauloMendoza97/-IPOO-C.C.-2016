#include <iostream>

class Animal
{
	protected:
		int edad;
	public:
		Animal();
		virtual void hablar();
		virtual void mover();
		virtual void moverCola();
};

class Mamifero : public Animal
{
	public:
		Mamifero();
		void hablar(); //redefiniendo
		void mover();  //redefiniendo
		void moverCola();
};

class Reptil : public Animal
{
	public:
		Reptil();
		void hablar(); //redefiniendo
		void mover();  //redefiniendo
		void moverCola();
};

class Ave : public Animal
{
	public:
		Ave();
		void hablar(); //redefiniendo
		void mover();  //redefiniendo
		void moverCola();
};

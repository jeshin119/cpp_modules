#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

// void chl(){
// 	system("leaks a.out");
// }

int main(){
	// atexit(chl);
	{
		std::cout<<"Subject's test\n";
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound! j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
		std::cout<<"\n";
	}
	//////////////////////////////////////////////////////////
	{
		std::cout<<"WrongAnimal's test\n";
		const WrongAnimal* beta= new WrongAnimal();
		const WrongCat* k = new WrongCat();
		std::cout<<k->getType()<<"\n";
		k->makeSound();
		beta->makeSound();
		delete beta;
		delete k;
		std::cout<<"\n";
	}
	//////////////////////////////////////////////////////////
	{
		std::cout<<"Dog's test\n";
		const Animal* gamma= new Animal();
		const Animal* k = new Dog();
		std::cout<<k->getType()<<"\n";
		k->makeSound();
		gamma->makeSound();
		delete gamma;
		delete k;
		std::cout<<"\n";
	}
}
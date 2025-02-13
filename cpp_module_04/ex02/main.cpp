#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

// void chl(){
// 	system("leaks a.out");
// }

int main(){
	// atexit(chl);
	{
		std::cout<<"#######################################\n";
		std::cout<<"Subject's test\n";
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
		std::cout<<"\n";
	}
	{
		std::cout<<"#######################################\n";
		std::cout<<"More test\n";
		// const Animal* k = new Animal(); //불가
		Dog* d1 = new Dog();
		Dog* d2 = d1;
		d2->makeSound();
		Dog* d3(d1);
		d3->makeSound();
		std::cout<<"\n";
	}
	{
		std::cout<<"#######################################\n";
		Cat* c1 = new Cat();
		Cat* c2 = c1;
		c2->makeSound();
		Cat* c3(c1);
		c3->makeSound();
		std::cout<<"\n";
	}
}
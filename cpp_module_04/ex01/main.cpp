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
		Animal *ptrAnimalTab[10];
		for(int i=0;i<10;i++){
			if (i%2==0)
				ptrAnimalTab[i]=new Cat();
			if (i%2==1)
				ptrAnimalTab[i]=new Dog();
		}
		for(int i=0;i<10;i++){
			delete ptrAnimalTab[i];
		}
		std::cout<<"\n";
	}
	{
		std::cout<<"#######################################\n";
		std::cout<<"More test\n";
		Cat cat1;
		cat1.getBrain()->setIdea(10,"........?");
		std::cout<<cat1.getBrain()<<"\n";
		Cat cat2 = cat1;
		cat2.getBrain()->prtIdeas();
		std::cout<<cat2.getBrain()<<"\n";
		std::cout<<"\n";
	}
}
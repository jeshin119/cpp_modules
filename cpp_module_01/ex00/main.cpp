#include "Zombie.hpp"

int main(){
	std::cout<<"create Foo"<<"\n";
	Zombie Foo("Foo");
	Foo.announce();
	std::cout<<"\n";

	std::cout<<"create newZombie"<<"\n";
	Zombie *newFoo=newZombie("newZombie");
	newFoo->announce();
	delete newFoo;

	std::cout<<"\n";
	std::cout<<"create randomChump"<<"\n";
	randomChump("randomChump");
	std::cout<<"\n";
}
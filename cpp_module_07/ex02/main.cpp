#include <iostream>
#include <exception>
#include "Array.hpp"

void	chl(){
	system("leaks a.out");
}

int main(){
	atexit(chl);

	//test1
	Array<int> a(10);
	for(int i=0;i<10;i++){
		a[i]=i;
	}
	for(int i=0;i<10;i++){
		std::cout<<a[i];
	}

	std::cout<<"\n";

	//test2
	Array<int> b(a);
	for(int i=0;i<10;i++){
		std::cout<<b[i];
	}

	std::cout<<"\n";

	//test3
	Array<int> c;
	c=a;
	for(int i=0;i<10;i++){
		std::cout<<c[i];
	}

	std::cout<<"\n";

	//test4
	try{
		std::cout<<a[11];
	}catch(std::exception& e){
		std::cerr<<e.what();
	}
	
	//test5
	Array<int> d;
	try{
		std::cout<<d[0];
	}catch(std::exception& e){
		std::cerr<<e.what();
	}
}
#include "Sed.hpp"

int main(){
	Sed sed;
	try{
		sed.sed();
	}catch(const std::runtime_error &e){
		std::cout<<"Erorr: "<<e.what()<<"\n";
	}
}
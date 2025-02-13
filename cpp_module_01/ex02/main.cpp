#include <iostream>
#include <string>
#include <iomanip>
int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR=&str;
	std::string &stringREF=str;
	std::cout<<"***************************************\n";
	std::cout<<"str: "<<str<<"\n\n";

	std::cout<<"*************ADDRESS*******************\n";
	std::cout<<"str: address: "<<&str<<"\n";
	std::cout<<"address held by PTR: "<<stringPTR<<"\n";
	std::cout<<"address held by REF: "<<&stringREF<<"\n";
	std::cout<<"\n";

	std::cout<<"*************VALUE*********************\n";
	std::cout<<"str: value: "<<str<<"\n";
	std::cout<<"value pointed to by PTR: "<<*stringPTR<<"\n";
	std::cout<<"value pointed to by REF: "<<stringREF<<"\n";
	std::cout<<"\n";
	return (0);
}
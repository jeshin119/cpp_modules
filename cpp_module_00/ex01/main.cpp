#include "Contact.hpp"
#include "PhoneBook.hpp"

void	prtStart(){
	std::cout<<"*********************************************"<<"\n";
	std::cout<<std::setw(9/2+45/2)<<"PhoneBook"<<"\n";
	std::cout<<"*********************************************"<<"\n\n\n";
}
void	prtOption(){
	std::cout<<"*********************************************"<<"\n";
	std::cout<<std::setw(45/2+30/2)<<"PHONEBOOK: ADD, SEARCH or EXIT\n";
	std::cout<<"*********************************************"<<"\n\n";
	std::cout<<">> ";
}
int main(){
	PhoneBook	phonebook;
	std::string	input;

	prtStart();
	try{
		while (true){
			prtOption();
			std::getline(std::cin, input);
			if (std::cin.eof())
				throw std::runtime_error("EOF");
			if (input == "EXIT")
				break;
			if (input == "ADD")
				phonebook.add();
			if (input == "SEARCH")
				phonebook.search();
		}
	}catch(const std::runtime_error &e){
		std::cerr<<"Error: "<<e.what()<<"\n";
	}
}
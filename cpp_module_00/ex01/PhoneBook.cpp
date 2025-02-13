#include "PhoneBook.hpp"

PhoneBook::PhoneBook():_index(0),_size(0){}
PhoneBook::~PhoneBook(){}
void	PhoneBook::add(){
	Contact	contact;

	std::cout<<"---------------------------------------------"<<"\n";
	std::cout<<std::setw(45/2+3/2)<<"ADD"<<"\n";
	std::cout<<"---------------------------------------------"<<"\n\n";
	contact.setFirstName();
	contact.setLastName();
	contact.setNicktName();
	contact.setPhoneNumber();
	contact.setDarkestSecret();
	_contacts[_index]=contact;
	_index++;
	if (_size < 8)
		_size++;
	if (_index == 8)
		_index = 0;
}
void	PhoneBook::search(){
	std::cout<<"---------------------------------------------"<<"\n";
	std::cout<<std::setw(45/2+6/2)<<"SEARCH"<<"\n";
	std::cout<<"---------------------------------------------"<<"\n\n";
	_prtAllContacts();
	_prtContact();
}
void	PhoneBook::_prtAllContacts(){
	std::cout<<"---------------------------------------------"<<"\n";
	std::cout<<"|"<<std::setw(10)<<"Index";
	std::cout<<"|"<<std::setw(10)<<"First name";
	std::cout<<"|"<<std::setw(10)<<"Last name";
	std::cout<<"|"<<std::setw(10)<<"Nick name"<<"|\n";
	std::cout<<"|----------|----------|----------|----------|"<<"\n";
	for(int i=0;i<_size;i++){
		std::cout<<"|"<<std::setw(10)<<i+1;
		std::cout<<"|";_contacts[i].putString(_contacts[i].getFirstName(),10);
		std::cout<<"|";_contacts[i].putString(_contacts[i].getLastName(),10);
		std::cout<<"|";_contacts[i].putString(_contacts[i].getNickName(),10);
		std::cout<<"|\n";
		std::cout<<"---------------------------------------------"<<"\n";
	}
}
void	PhoneBook::_prtContact(){
	int	i;

	if ((i=_getSearchIndex()) == -1)
		return ;
	std::cout<<"---------------------------------------------"<<"\n";
	std::cout<<"First Name: ";_contacts[i].putString(_contacts[i].getFirstName());
	std::cout<<"\n";
	std::cout<<"Last Name: ";_contacts[i].putString(_contacts[i].getLastName());
	std::cout<<"\n";
	std::cout<<"Nick Name: ";_contacts[i].putString(_contacts[i].getNickName());
	std::cout<<"\n";
	std::cout<<"Phone Number: ";_contacts[i].putString(_contacts[i].getPhoneNumber());
	std::cout<<"\n";
	std::cout<<"Darkest Secret: ";_contacts[i].putString(_contacts[i].getDarkestSecret());
	std::cout<<"\n";
	std::cout<<"---------------------------------------------"<<"\n";
}
int		PhoneBook::_getSearchIndex(){
	std::string	str;
	int			i;

	std::cout<<"Put index to find contact\n>> ";
	std::getline(std::cin,str);
	if (std::cin.eof())
		throw std::runtime_error("EOF");
	if ((atoi(str.c_str()) < 1 || atoi(str.c_str()) > _size))
		return (-1);
	i = atoi(str.c_str()) - 1;
	return (i);
}
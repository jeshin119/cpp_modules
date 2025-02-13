#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}
void	Contact::setFirstName(){
	std::cout<<"Put first name"<<"\n";
	this->_firstName = _getString();
}
void	Contact::setLastName(){
	std::cout<<"Put last name"<<"\n";
	this->_lastName = _getString();
}
void	Contact::setNicktName(){
	std::cout<<"Put nickname"<<"\n";
	this->_nickName = _getString();
}
void	Contact::setPhoneNumber(){
	std::cout<<"Put phonenumber. number only"<<"\n";
	std::string str = _getString();
	for(int i=0;str[i]!=0;i++){
		if (str[i]<'0' || str[i]>'9'){
			std::cout<<"wrong phonenumber\n";
			return (setPhoneNumber());
		}
	}
	this->_phoneNumber = str;
}
void	Contact::setDarkestSecret(){
	std::cout<<"Put darkest secret"<<"\n";
	this->_darkestSecret = _getString();
}
std::string		Contact::getFirstName(void) const{
	return (this->_firstName);
}
std::string		Contact::getLastName(void) const{
	return (this->_lastName);
}
std::string		Contact::getNickName(void) const{
	return (this->_nickName);
}
std::string		Contact::getPhoneNumber(void) const{
	return (this->_phoneNumber);
}
std::string		Contact::getDarkestSecret(void) const{
	return (this->_darkestSecret);
}
void	Contact::putString(std::string str)
{
	if (str.size()>=10)
		return (_truncateToNineWithDot(str));
	std::cout<<str;
}
void	Contact::putString(std::string str,int n)
{
	if (str.size()>=10)
		return (_truncateToNineWithDot(str));
	std::cout<<std::setw(n)<<str;
}
void	Contact::_truncateToNineWithDot(std::string str){
	for(int i=0;i<9;i++)
		std::cout<<str[i];
	std::cout<<".";
}
std::string		Contact::_getString(){
	std::string str;

	std::cout<<">> ";
	std::getline(std::cin,str);
	if (std::cin.eof())
		throw std::runtime_error("EOF");
	if (str.empty()){
		std::cout<<"no empty\n";
		return (_getString());
	}
	return str;
}
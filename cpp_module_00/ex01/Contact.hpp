#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <string>
#include <iostream>
#include <iomanip>
class Contact
{
public:
	Contact();
	~Contact();
	void	putString(std::string str);
	void	putString(std::string str,int n);
	void	setFirstName();
	void	setLastName();
	void	setNicktName();
	void	setPhoneNumber();
	void	setDarkestSecret();
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	void		_truncateToNineWithDot(std::string str);
	std::string	_getString();
};

#endif
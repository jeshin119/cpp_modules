#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook{
public:
	PhoneBook();
	~PhoneBook();
	void		add();
	void		search();
private:
	int		_index;
	int		_size;
	Contact	_contacts[8];
	void	_prtAllContacts();
	void	_prtContact();
	int		_getSearchIndex();
};

#endif
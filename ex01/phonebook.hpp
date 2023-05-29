#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "Contact.hpp"

class Phonebook{
private:
	Contact arr[8];
	int		idx;
public:
	Phonebook();
	int add_information();
	int search_information();
	~Phonebook();
};
#endif

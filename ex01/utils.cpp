#include "Phonebook.hpp"

int check_correct_letter(std::string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if (!isalpha(str[i]))
			return (0);
	}
	return (1);
}

int check_correct_number(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

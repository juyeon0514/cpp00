#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	this->idx = 0;
}

int	Phonebook::add_information()
{
	std::string str;

	std::cout << "Plz, insert your first name\n";
	std::cin >> str;
	if (!check_correct_letter(str))
		return (1);
	this->arr[idx % 8].get_first_name(str);
	std::cout << "Plz, insert your last name\n";
	std::cin >> str;
	if (!check_correct_letter(str))
		return (1);
	this->arr[idx % 8].get_last_name(str);
	std::cout << "Plz, insert your nick name\n";
	std::cin >> str;
	if (str.empty())
		return (1);
	this->arr[idx % 8].get_nick_name(str);
	std::cout << "Plz, insert your phone number\n";
	std::cin >> str;
	if (!check_correct_number(str))
		return (1);
	this->arr[idx % 8].get_phone_number(str);
	std::cout << "Plz, insert your darkest secret\n";
	std::cin >> str;
	if (str.empty())
		return (1);
	this->arr[idx % 8].get_darkest_secret(str);
	idx++;
	return (0);
}

std::string Contact::Print_length(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0,9) + ".");
	else
		return (str);
}

void	Contact::PrintContact(std::string i)
{
	std::cout << std::setw(10) << Print_length(i) << "|";
	std::cout << std::setw(10) << Print_length(this->first_name) << "|";
	std::cout << std::setw(10) << Print_length(this->last_name) << "|";
	std::cout << std::setw(10) << Print_length(this->nick_name) << "|" <<std::endl;
}

void	Contact::Print_all()
{
	std::cout << "FIRST NAME: "<< this->first_name << std::endl;
	std::cout << "LAST NAME: "<< this->last_name << std::endl;
	std::cout << "NICK NAME: " << this->nick_name << std::endl;
	std::cout << "PHONE NUMBER: " << this->phone_number << std::endl;
	std::cout << "DARKEST_SECRET: " << this->darkest_secret << std::endl;
}

int	Phonebook::search_information()
{
	int	i;
	std::string	num;

	i = 0;
	if (this->idx == 0)
	{
		std::cout << "Phone book is empty, Plz insert information\n";
	}
	else
	{
		std::cout << std::setw(10) << "index" << "|";
		std::cout << std::setw(10) << "first_name" << "|";
		std::cout << std::setw(10) << "last_name" << "|";
	 	std::cout << std::setw(10) << "nick_name" << "|" << std::endl;
		while (i < this->idx && i < 8)
		{
			this->arr[i].PrintContact(std::to_string(i));
			i++;
		}
		std::cin >> num;
		while (1)
		{
			if (!check_correct_number(num))
			{
				std::cout << "It is not number" << std::endl;
				std::cin >> num;
			}
			else
				break;
		}
		if (std::stoi(num) >= 0 && std::stoi(num) <= 7 && std::stoi(num) < this->idx)
			arr[stoi(num)].Print_all();
		else
			std::cout << "Wrong number range" << std::endl;
	}
	return (0);
}

Phonebook::~Phonebook()
{
	std::cout << "destroy" << std::endl;
}

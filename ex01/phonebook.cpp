#include "phonebook.hpp"

int	check_correct_component(const std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

int check_is_num(const std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

int	add_information()
{
	database data;
	std::string str;

	std::cout << "please insert your first name\n";
	if (!check_correct_component(str))
		return (1);
	data.get_first_name(str);

	std::cout << "please insert yout last name\n";
	if (!check_correct_component(str))
		return (1);
	data.get_last_name(str);

	std::cout << "please insert your nick name\n";
	if (!check_correct_component(str))
		return (1);
	data.get_nick_name(str);

	std::cout << "please insert your darkest secret\n";
	if (!check_correct_component(str))
		return (1);
	data.get_darkest_secret(str);

	std::cout << "phonebook insert your phone number\n";
	if (!check_is_num(str))
		return (1);
	data.phone_number(str);
	this->arr[current_idx];
	this->current_idx++;
	return (0);
}

string 

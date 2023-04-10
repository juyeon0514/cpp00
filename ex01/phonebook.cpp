#include "phonebook.hpp"

int	check_correct_component(const std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isalpha(str[i]))
			return (INCORRECT);
	}
	return (CORRECT);
}

int check_is_num(const std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (INCORRECT);
	}
	return (CORRECT);
}

int	add_information_check(std::string str)
{
	int end;

	end = 0;
	while (!end)
	{
		str::cin >> str;
		if (str.empty())
			std::cout << "information is null, try again" << std::endl;
		else if (check_correct_component(str))
			std::cout << "information is strange, try again" << std::endl;
		else
			end = 1;
	}
	return (SUCCESS);
}

int	add_phone_number_check(std::string str)
{
	int end;

	end = 0;
	while (!end)
	{
		str::cin >> str;
		if (str.empty())
			std::cout << "information is null, try again" << std::endl;
		else if (check_is_num(str))
			std::cout << "information is strange, try again" << std::endl;
		else
			end = 1;
	}
	return (SUCCESS);
}

int	phonebook::add_information()
{
	database data;
	std::string str;

	std::cout << "please insert your first name\n";
	if (add_information_check(str))
		return (FAIL);
	data.add_first_name(str);

	std::cout << "please insert yout last name\n";
	if (add_information_check(str))
		return (FAIL);
	data.add_last_name(str);

	std::cout << "please insert your nick name\n";
	if (add_information_check(str))
		return (FAIL);
	data.add_nick_name(str);

	std::cout << "please insert your darkest secret\n";
	if (add_information_check(str))
		return (FAIL);
	data.add_darkest_secret(str);

	std::cout << "phonebook insert your phone number\n";
	if (add_phone_number_check(str))
		return (FAIL);
	data.phone_number(str);
	this->arr[current_idx % 8];
	this->current_idx++;
	return (SUCCESS);
}

std::string show_name(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void	print_search_line(Phonebook arr, int i)
{
	std::cout << std::right << set::setw(10) << i;
	std::cout << std::right << set::setw(10) << show_name(arr.first_name);
	std::cout << std::right << set::setw(10) << show_name(arr.last_name);
	std::cout << std::right << set::setw(10) << show_name(arr.nick_name); <<std::endl;
}

void	print_all_information(Phonebook arr)
{
	std::cout << "first_name :" << arr.get_first_name() << std::endl;
	std::cout << "last name :" << arr.get_last_name() << std::endl;
	std::cout << "nick name :" << arr.get_nick_name() << std::endl;
	std::cout << "phone number :" << arr.get_phone_number() << std::endl;
	std::cout << "darkest secret :" << arr.get_darkest_secret << std::endl;
}

int	Phonebook::search_information()
{
	int	i;
	int	number;

	i = 0;
	if (this->current_index == 0)
		std::cout << "Phone book is empty." << std::endl;
	else
	{
		std::cout << std::right << std::setw(10) << "index" << "|";;
		std::cout << std::right << std::setw(10) << "first name" << "|";
		std::cout << std::right << std::setw(10) << "last name" << "|";
		std::cout << std::right << std::setw(10) << "nick name" << "|" << std::endl;
		while (i < this->current_idx && i < 8)
		{
			print_search_line(this->arr[i], i);
			i++;
		}
		std::cout << "Please enter the number you search" << std::endl;
		std::cin >> number;
		while (TRUE)
		{
			if (number <= 7 && number >= 0)
			{
				if (this->arr[number].get_first_name().empty())
					std::cout << "this contact is empty\n";
				else
				{
					print_all_contanct(this->arr[number]);
					break ;
				}
			}
			else
				std::cout << "Out of range, try again" << std::endl;
		}
	}
	return (SUCCESS);
}
 
#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	command;

	while(1)
	{
		std::cout << "please insert command" << std::endl;
		std::cin >> command;
		if (command == "ADD")
		{
			if (phonebook.add_information())
				std::cout << "Wrong information\n" << std::endl;
		}
		else if (command == "SEARCH")
		{
			if (phonebook.search_information())
				std::cout << "Wrong information\n";
		}
		else if (command == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "this command is not correct try again" << std::endl;
		}
	}
	std::cout << "Phonebook finish" << std::endl;
	exit(0);
}

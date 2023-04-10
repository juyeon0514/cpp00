#include "phonebook.hpp"
#include "database.hpp"

int main(void)
{
	int	end;
	phonebook book;
	std::string str;

	end = 0;
	while (!end)
	{
		std::cout << "please insert command";
		std::cin >> str;
		if (str == "ADD")
		{
			if (book.add_informatin())
				std::cout << "ADD is failed\n" << "this cmd is exhibit";
		}
		else if (str == "SEARCH")
		{
			if (book.search_information())
				std::cout << "SEARCH is failed\n" << "this cmd is exhibit";
		}
		else if (str == "EXIT" || str == EOF)
			break ;
		else
			std::cout << "invalid command, try again";
	}
	std::cout << "phonebook finish\n";
	exit(SUCCESS);
}
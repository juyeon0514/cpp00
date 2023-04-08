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
			add_informatin(book);
		else if (str == "SEARCH")
			search_information();
		else if (str == "EXIT")
			end = 1;
		else
			std::cout << "invalid command, try again";
	}
	std::cout << "phonebook finish\n";
	exit(0);
}
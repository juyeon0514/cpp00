#pragma once
#ifndef __DATABASE_H__
# define __DATABASE_H__

# include <iostream>
# include <cctype>
# include <iomanip>

class Contact {
	private:
		std::string first_name;
		std::string	last_name;
		std::string nick_name;
		std::string darkest_secret;
		std::string phone_number;
	public:
		Contact();
		~Contact();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nick_name();
		std::string get_darkest_secret();
		std::string phone_number();
};
#endif
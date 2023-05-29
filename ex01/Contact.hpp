#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

class Contact
{
private:
	std::string first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	void	get_first_name(std::string str);
	void	get_last_name(std::string str);
	void	get_nick_name(std::string str);
	void	get_phone_number(std::string str);
	void	get_darkest_secret(std::string str);
	void	PrintContact(std::string i);
	std::string	Print_length(std::string str);
	void	Print_all();
};

int check_correct_number(std::string str);
int check_correct_letter(std::string str);

#endif

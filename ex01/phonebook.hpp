#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include <iostream>
# include <cctype>
# include <iomanip>

# define SUCCESS 0
# define FAIL 1

# define CORRECT 0
# define INCORRECT 1

class Phonebook {
private:
	Contact arr[8];
	int	current_idx;
public:
	phonebook();
	~phonebook();
	int add_information();
	int search_information();
};
#endif
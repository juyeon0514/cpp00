#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include <iostream>
# include <cctype>
# include <iomanip>

class phonebook {
private:
	database arr[8];
	int	current_idx;
public:
	phonebook();
	~phonebook();
	int add_information();
	void search_information();
};
#endif
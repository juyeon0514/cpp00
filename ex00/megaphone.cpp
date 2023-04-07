#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	char ch;
	int	i;

	if (argc == 1)
	{
		std::string str1 = "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		std::cout << str1;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str2 = argv[i];
			for (int j = 0; j < str2.length(); j++)
			{
				if (str2[j] == '"')
					;
				else
					std::cout << (char) toupper(str2[j]);
			}
			std::cout << " ";
		}
		std::cout << "\n";
	} 
	return 0; 
}

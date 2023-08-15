#include "PhoneBook.hpp"

void userInput(std::string &dst)
{
	std::getline(std::cin, dst);
	if (std::cin.eof())
	{
		std::cout << "\nGoodbye!" << std::endl;
		exit(0);
	}
}

#include "Contact.hpp"

Contact Contact::addContact(void)
{
	Contact contact;

	std::cout << "First name: " << std::flush;
	std::getline(std::cin, contact.firstName);
	if (std::cin.eof())
	{
		std::cout << "\nGoodbye!" << std::endl;
		exit(0);
	}
	return contact;
}

std::string const&Contact::getFirstName() const
{
	return firstName;
}

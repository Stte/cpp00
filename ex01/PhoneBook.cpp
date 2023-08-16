#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_idx(0), contact_count(0){}

t_command	PhoneBook::prompt(void)
{
	std::cout << "> ";
	std::string input;
	userInput(input);
	if (!input.compare("EXIT"))
	{
		return (EXIT);
	}
	if (!input.compare("ADD"))
	{
		addContact();
		return (ADD);
	}
	if (!input.compare("SEARCH"))
	{
		searchContact();
		return (SEARCH);
	}
	std::cout << "Invalid command!" << std::endl;
	return (INVALID);

}

void	PhoneBook::addContact()
{
	Contact contact = Contact::addContact();

	if (!contact.isValid())
	{
		std::cout << "Invalid contact!" << std::endl;
		return ;
	}
	contacts[contact_idx] = contact;
	contact_idx = (contact_idx + 1) % max_contacts;
	if (contact_count < max_contacts)
		contact_count++;
}

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::searchContact() const
{
	std::cout << std::right
			<< std::setw(10) << truncate("Index") << "|"
			<< std::setw(10) << truncate("First Name") << "|"
			<< std::setw(10) << truncate("Last Name") << "|"
			<< std::setw(10) << truncate("Nickname")
			<< std::endl;
	for (int i = 0; i < contact_count; i++)
	{
		std::cout << std::right
			<< std::setw(10) << i << "|"
			<< std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
			<< std::setw(10) << truncate(contacts[i].getLastName()) << "|"
			<< std::setw(10) << truncate(contacts[i].getNickname())
			<< std::endl;
	}
	std::cout << "Give index: ";
	std::string input;
	userInput(input);
	int contact_index = -1;
	try { contact_index = std::stoi(input); } catch (...) {}
	if (contact_index < 0 || contact_index > contact_count - 1)
	{
		std::cout << "¯\\_(ツ)_/¯" << std::endl;
		return;
	}
	contacts[contact_index].display();
}


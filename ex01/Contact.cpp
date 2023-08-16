#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact Contact::addContact(void)
{
	Contact contact;

	std::cout << "First name: " << std::flush;
	userInput(contact.firstName);
	std::cout << "Last name: " << std::flush;
	userInput(contact.lastName);
	std::cout << "Nickname: " << std::flush;
	userInput(contact.nickname);
	std::cout << "Phone Number: " << std::flush;
	userInput(contact.phoneNbr);
	std::cout << "Darkest secret: " << std::flush;
	userInput(contact.darkestSecret);
	return contact;
}

bool Contact::isValid(void) const
{
	if (
		firstName.empty()
		|| lastName.empty()
		|| nickname.empty()
		|| phoneNbr.empty()
		|| darkestSecret.empty()
	)
	{
		return (false);
	}
	return (true);

}

void Contact::display(void) const
{
	std::cout << firstName << '\n'
			<< lastName << '\n'
			<< nickname << '\n'
			<< phoneNbr << '\n'
			<< darkestSecret << std::endl;
}

std::string const&Contact::getFirstName() const
{
	return firstName;
}
std::string const&Contact::getLastName() const
{
	return lastName;
}
std::string const&Contact::getNickname() const
{
	return nickname;
}
std::string const&Contact::getPhoneNbr() const
{
	return phoneNbr;
}
std::string const&Contact::getDarkestSecret() const
{
	return darkestSecret;
}

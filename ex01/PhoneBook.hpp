#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

typedef enum e_command
{
	EXIT,
	ADD,
	SEARCH,
	INVALID
} t_command;

class PhoneBook
{
	public:
		PhoneBook();
		t_command prompt(void);
	private:
		static const int	max_contacts = 8;
		Contact				contacts[max_contacts];
		int					contact_idx;
		int					contact_count;

		void	addContact(void);
		void	searchContact(void) const;
};

void userInput(std::string &dst);

#endif

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	public:
		static Contact addContact(void);
		bool isValid(void) const;
		void display(void) const;
		std::string const&getFirstName() const;
		std::string const&getLastName() const;
		std::string const&getNickname() const;
		std::string const&getPhoneNbr() const;
		std::string const&getDarkestSecret() const;
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNbr;
		std::string darkestSecret;
};

// std::string: This is the return type of the function.
// const&: This is a reference qualifier that indicates that the function is returning a constant reference to a std::string object. It means that the function will not modify the object it is returning, and it is more efficient than returning a copy of the object.
// const: This is a member function qualifier that indicates that the function does not modify the state of the object it is called on. It is used when the function is called on a constant object or when the function should not modify the object's state.

#endif

#include "Contact.hpp"

#include <iostream>
#include <string>
#include <limits>

void Contact::setContact(void)
{
	std::string fields[FIELD_NUM] =
		{"First name", "Last name", "Nick name", "Phone number", "Darkest secret"};
	std::string user_input[FIELD_NUM];

	for (int i = 0; i < FIELD_NUM; i++)
	{
		while (user_input[i].empty())
		{
			std::cout << fields[i] << ": ";
			std::getline(std::cin, user_input[i]);
			if (std::cin.eof())
				return;
		}
	}

	_firstName = fields[0];
	_lastName = fields[1];
	_nickName = fields[2];
	_phoneNumber = fields[3];
	_darkestSecret = fields[4];

	return;
}

std::string Contact::getFirstName(void) const
{
	std::cout << _firstName;
	return _firstName;
}
std::string Contact::getLastName(void) const
{
	return _lastName;
}
std::string Contact::getNickName(void) const
{
	return _nickName;
}
std::string Contact::getPhoneNumber(void) const
{
	return _phoneNumber;
}
std::string Contact::getDarkestSecret(void) const
{
	return _darkestSecret;
}
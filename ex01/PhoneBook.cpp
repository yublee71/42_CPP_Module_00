#include "PhoneBook.hpp"

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

void PhoneBook::add(void)
{
	Contact newContact;

	newContact.setContact();
	newContact = _contacts[_index % MAX_CONTACT_NUM];
	_index++;

	return;
}

static void print_with_format(std::string str)
{
	if (str.size() > 11)
	{
		str.erase(10);
		str[9] = '.';
	}
	std::cout.width(10);
	std::cout.fill('.');
	std::cout << str;
}

void PhoneBook::search(void) const
{
	std::string user_input;
	int index;

	std::cout << "Enter an index to search (from 1 to 8): ";
	while (true)
	{
		if (!std::getline(std::cin, user_input))
			return;

		index = std::atoi(user_input.c_str());
		if (index < 1 || index > MAX_CONTACT_NUM)
			std::cout << "Invalid index value. Please enter again: ";
		else
		{
			print_with_format(user_input);
			std::cout << "|";
			print_with_format(_contacts[index - 1].getFirstName());
			std::cout << "|";
			print_with_format(_contacts[index - 1].getLastName());
			std::cout << "|";
			print_with_format(_contacts[index - 1].getNickName());
			std::cout << std::endl;
			return;
		}
	}
}
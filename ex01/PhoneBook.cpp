#include <string>
#include <iostream>
#include <limits>
#include "PhoneBook.hpp"

void PhoneBook::add(void)
{
	Contact newContact;
	Contact oldestContact;
	int index = 0;

	newContact.setContact();

	while (index < MAX_CONTACT_NUM)
	{
		if (this->contacts[index].getFirstName().empty())
			break;
		index++;
	}

	if (index == MAX_CONTACT_NUM)
	{
		index = 0;
		for (int i = 1; i < MAX_CONTACT_NUM; i++)
			if (this->contacts[i].getAddedTime() < this->contacts[index].getAddedTime())
				index = i;
	}

	this->contacts[index] = newContact;
	return;
}

void PhoneBook::search(void) const
{
	int user_index;

	std::cout << "Enter an index: ";
	std::cin >> user_index;

	if (std::cin.fail() || user_index < 1 || user_index > MAX_CONTACT_NUM)
		std::cout << "Invalid index value. Please enter again: ";
	else
		this->contacts[user_index - 1].printContact(user_index);

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
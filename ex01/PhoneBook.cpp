#include <string>
#include <iostream>
#include <limits>
#include "PhoneBook.hpp"

void PhoneBook::setPhoneBook(void)
{
	Contact newContact;
	Contact oldestContact;
	int i = 0;
	int j = 0;

	newContact.setContact();
	while (i < MAX_CONTACT_NUM)
	{
		if (this->contacts[i].getFirstName().empty())
			break;
		i++;
	}
	if (i == MAX_CONTACT_NUM)
	{
		while (j + 1 < MAX_CONTACT_NUM)
		{
			if (this->contacts[j].getAddedTime() > this->contacts[j + 1].getAddedTime())
				break;
			j++;
		}
		j++;
		i = j;
		if (j == MAX_CONTACT_NUM)
			i = 0;
	}
	this->contacts[i] = newContact;
	return;
}

void PhoneBook::printByIndex(void) const
{
	int user_index;

	std::cout << "Enter an index: ";
	std::cin >> user_index;

	if (std::cin.fail() || user_index < 1 || user_index > MAX_CONTACT_NUM)
		std::cout << "Invalid index value. Please enter again: ";
	// else if (this->contacts[user_index - 1].getFirstName().empty())
	// 	std::cout << "This index is empty. Please enter again: ";
	else
		this->contacts[user_index - 1].printContact(user_index);
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
#include "PhoneBook.hpp"

void PhoneBook::setPhoneBook(void)
{
	Contact newContact;
	Contact currentContact;

	newContact.setContact();
	for (int i = 0; i < MAX_CONTACT_NUM; i++)
	{
		currentContact = this->contacts[i];
		if (currentContact.getContact("first").empty())
		{
			this->contacts[i] = newContact;
			return;
		}
	}
	this->contacts[0] = newContact;
	return;
}

void PhoneBook::getPhoneBook(void)
{
	for (int i = 0; i < MAX_CONTACT_NUM; i++)
	{
		this->contacts[i].getContact("print");
	}
}
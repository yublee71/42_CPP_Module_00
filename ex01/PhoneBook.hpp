#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#define MAX_CONTACT_NUM 8

#include "Contact.hpp"

class PhoneBook
{

public:
	void setPhoneBook(void);
	void printByIndex(void) const;

private:
	Contact contacts[MAX_CONTACT_NUM];
};

#endif
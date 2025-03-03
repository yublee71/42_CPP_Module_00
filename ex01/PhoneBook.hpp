#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACT_NUM 8

#include "Contact.hpp"

class PhoneBook
{

public:
	void add(void);
	void search(void) const;

private:
	Contact _contacts[MAX_CONTACT_NUM];
	int _index;
};

#endif
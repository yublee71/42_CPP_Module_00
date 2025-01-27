#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#define MAX_CONTACT_NUM = 8

class PhoneBook
{

private:
	Contact contacts[MAX_CONTACT_NUM];
public:
	PhoneBook();
	~PhoneBook();

};

#endif
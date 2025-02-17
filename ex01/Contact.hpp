#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{

public:
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;
	time_t getAddedTime(void) const;
	void setContact(void);
	void printContact(int index) const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
	time_t _addedTime;
};

#endif
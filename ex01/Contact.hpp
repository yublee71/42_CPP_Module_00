#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{

public:
	void setContact(std::string args[5]);
	void getContact(void) const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
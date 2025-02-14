#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{

public:
	void setContact(void);
	std::string getContact(std::string s);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
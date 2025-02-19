#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{

public:
	std::string getFirstName(void) const;
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
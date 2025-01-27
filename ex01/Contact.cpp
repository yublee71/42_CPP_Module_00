#include "Contact.hpp"
#include <iostream>

void Contact::setContact(std::string args[5])
{
	this->_firstName = args[0];
	this->_lastName = args[1];
	this->_nickName = args[2];
	this->_phoneNumber = args[3];
	this->_darkestSecret = args[4];
	return;
}

void Contact::getContact(void) const
{
	std::cout << "The first name is :" << this->_firstName;
	std::cout << "The last name is :" << this->_lastName;
	std::cout << "The nick name is :" << this->_nickName;
	std::cout << "The phone number is :" << this->_phoneNumber;
	std::cout << "The darkest secret is :" << this->_darkestSecret;
}
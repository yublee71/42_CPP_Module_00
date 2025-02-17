#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <sstream>
#include "Contact.hpp"

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}
std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}
std::string Contact::getNickName(void) const
{
	return (this->_nickName);
}
std::string Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}
std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
std::time_t Contact::getAddedTime(void) const
{
	return (this->_addedTime);
}

void Contact::setContact(void)
{
	std::string user_input;

	while (this->_firstName.empty())
	{
		std::cout << "Please enter the first name:"
				  << std::endl;
		std::getline(std::cin, user_input);
		this->_firstName = user_input;
	}
	while (this->_lastName.empty())
	{
		std::cout << "Please enter the last name:"
				  << std::endl;
		std::getline(std::cin, user_input);
		this->_lastName = user_input;
	}
	while (this->_nickName.empty())
	{
		std::cout << "Please enter the nickname:"
				  << std::endl;
		std::getline(std::cin, user_input);
		this->_nickName = user_input;
	}
	while (this->_phoneNumber.empty())
	{
		std::cout << "Please enter the phone number:"
				  << std::endl;
		std::getline(std::cin, user_input);
		this->_phoneNumber = user_input;
	}
	while (this->_darkestSecret.empty())
	{
		std::cout << "Please enter the darkest secret:"
				  << std::endl;
		std::getline(std::cin, user_input);
		this->_darkestSecret = user_input;
	}
	std::time(&this->_addedTime);
	return;
}

static void print_with_format(std::string str)
{
	if (str.size() > 11)
	{
		str.erase(10);
		str[9] = '.';
	}
	std::cout.width(10);
	std::cout.fill('.');
	std::cout << str;
}

void Contact::printContact(int index) const
{
	std::ostringstream tmp;
	std::string indexStr;

	tmp << index;
	indexStr = tmp.str();
	print_with_format(indexStr);
	std::cout << "|";
	print_with_format(this->_firstName);
	std::cout << "|";
	print_with_format(this->_lastName);
	std::cout << "|";
	print_with_format(this->_nickName);
	std::cout << std::endl;
}
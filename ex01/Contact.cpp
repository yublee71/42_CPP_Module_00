#include "Contact.hpp"

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
	return;
}

std::string Contact::getContact(std::string s)
{
	if (s == "first")
		return (this->_firstName);
	else if (s == "last")
		return (this->_lastName);
	else if (s == "nick")
		return (this->_nickName);
	else if (s == "phone")
		return (this->_phoneNumber);
	else if (s == "darkest")
		return (this->_darkestSecret);
	else if (s == "print")
	{
		std::cout << "The first name is :" << this->_firstName << std::endl;
		std::cout << "The last name is :" << this->_lastName << std::endl;
		std::cout << "The nick name is :" << this->_nickName << std::endl;
		std::cout << "The phone number is :" << this->_phoneNumber << std::endl;
		std::cout << "The darkest secret is :" << this->_darkestSecret << std::endl;
		return "";
	}
	else
		return "";
}
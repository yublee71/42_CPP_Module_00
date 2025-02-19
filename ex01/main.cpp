#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>

int main(void)
{
	PhoneBook PhoneBook;
	std::string user_input;

	while (true)
	{
		std::cout << "Please enter one of the three commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, user_input);
		if (user_input == "ADD")
			PhoneBook.add();
		else if (user_input == "SEARCH")
			PhoneBook.search();
		else if (user_input == "EXIT" || std::cin.eof())
		{
			std::cout << "Exiting the program..." << std::endl;
			break;
		}
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}
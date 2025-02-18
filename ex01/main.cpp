#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>
#include <limits>

int main(void)
{
	PhoneBook PhoneBook;
	std::string user_input;

	while (true)
	{
		std::cout << "Please enter one of the three commands: ADD, SEARCH, EXIT"
				  << std::endl;
		std::getline(std::cin, user_input);
		if (user_input == "ADD")
			PhoneBook.setPhoneBook();
		else if (user_input == "SEARCH")
			PhoneBook.printByIndex();
		else if (user_input == "EXIT")
		{
			std::cout << "Exit the program" << std::endl;
			break;
		}
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}
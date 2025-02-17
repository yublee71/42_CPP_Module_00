#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>
#include <limits>

int main(void)
{
	PhoneBook PhoneBook;
	std::string user_input;
	std::string possible_user_input[3] = {"ADD", "SEARCH", "EXIT"};

	while (true)
	{
		std::cout << "Please enter one of the three commands: ADD, SEARCH, EXIT"
				  << std::endl;
		std::getline(std::cin, user_input);
		if (user_input == possible_user_input[0])
			PhoneBook.setPhoneBook();
		else if (user_input == possible_user_input[1])
			PhoneBook.printByIndex();
		else if (user_input == possible_user_input[2])
		{
			std::cout << "Exit the program" << std::endl;
			break;
		}
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}
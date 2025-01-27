// #include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>

int main(void)
{
	std::string user_input;
	std::string possible_user_input[3] = {"ADD", "SEARCH", "EXIT"};

	while (true)
	{
		std::cout << "Please enter one of the three commands: ADD, SEARCH, EXIT"
				  << std::endl;
		std::getline(std::cin, user_input);
		if (user_input == possible_user_input[0])
			std::cout << "ADD entered" << std::endl;
		else if (user_input == possible_user_input[1])
			std::cout << "SEARCH entered" << std::endl;
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
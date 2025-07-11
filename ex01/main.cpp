#include "PhoneBook.hpp"

#include <iostream>

int main(void) {
  PhoneBook phone_book;
  std::string user_input;

  while (!std::cin.fail()) {
    std::cout << "Please enter one of the three commands: ADD, SEARCH, EXIT"
              << std::endl;
    std::getline(std::cin, user_input);
    if (user_input == "ADD")
      phone_book.add();
    else if (user_input == "SEARCH")
      phone_book.search();
    else if (user_input == "EXIT")
      break;
    else if (!user_input.empty())
      std::cout << "Invalid command. Please try again." << std::endl;
    user_input.clear();
  }

  std::cout << "\nExiting the program..." << std::endl;
  return (0);
}

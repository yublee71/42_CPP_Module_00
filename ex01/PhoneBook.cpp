#include "PhoneBook.hpp"

#include <cstdlib>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>

int PhoneBook::index_ = 0;

void PhoneBook::add(void) {
  Contact new_contact;

  new_contact.setContact();
  contacts_[index_ % MAX_CONTACT_NUM] = new_contact;
  index_++;
  return;
}

static void print_with_format(std::string str) {
  if (str.size() > 11) {
    str.erase(10);
    str[9] = '.';
  }
  std::cout.width(10);
  std::cout.fill('.');
  std::cout << str;
}

void PhoneBook::search(void) const {
  std::string user_input;
  std::string index_str;
  std::stringstream index_str_stream;
  int index;

  for (int i = 0; i < MAX_CONTACT_NUM; i++) {
    index_str_stream.str("");
    index_str_stream.clear();
    index_str_stream << i + 1;
    index_str = index_str_stream.str();
    print_with_format(index_str);
    std::cout << "|";
    print_with_format(contacts_[i].getFirstName());
    std::cout << "|";
    print_with_format(contacts_[i].getLastName());
    std::cout << "|";
    print_with_format(contacts_[i].getNickName());
    std::cout << std::endl;
  }

  std::cout << "Enter an index to search (from 1 to 8): ";
  while (true) {
    if (!std::getline(std::cin, user_input))
      return;
    index = std::atoi(user_input.c_str());
    if (index < 1 || index > MAX_CONTACT_NUM)
      std::cout << "Invalid index value. Please enter again: ";
    else {
      contacts_[index - 1].printContact();
      return;
    }
  }
}

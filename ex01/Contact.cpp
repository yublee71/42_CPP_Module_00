#include "Contact.hpp"

#define FIELD_NUM 5

#include <iostream>
#include <limits>
#include <string>

void Contact::setContact(void) {
  std::string fields[FIELD_NUM] = {"First name", "Last name", "Nickname",
                                   "Phone number", "Darkest secret"};
  std::string user_input[FIELD_NUM];

  for (int i = 0; i < FIELD_NUM; i++) {
    while (user_input[i].empty()) {
      std::cout << fields[i] << ": ";
      std::getline(std::cin, user_input[i]);
      if (std::cin.eof())
        return;
    }
  }

  first_name_ = fields[0];
  last_name_ = fields[1];
  nickname_ = fields[2];
  phone_number_ = fields[3];
  darkest_secret_ = fields[4];

  return;
}

std::string Contact::getFirstName(void) const {
  std::cout << first_name_;
  return first_name_;
}

std::string Contact::getLastName(void) const { return last_name_; }

std::string Contact::getNickName(void) const { return nickname_; }

std::string Contact::getPhoneNumber(void) const { return phone_number_; }

std::string Contact::getDarkestSecret(void) const { return darkest_secret_; }

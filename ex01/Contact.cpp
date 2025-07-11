#include "Contact.hpp"

#include <iostream>
#include <limits>
#include <string>

const std::string Contact::fields[FIELD_NUM] = {
    "First name: ", "Last name: ", "Nickname: ", "Phone number: ",
    "Darkest secret: "};

void Contact::setContact(void) {
  std::string user_input[FIELD_NUM];

  for (int i = 0; i < FIELD_NUM; i++) {
    while (user_input[i].empty()) {
      user_input[i] = "";
      std::cout << fields[i];
      std::getline(std::cin, user_input[i]);
      if (std::cin.eof())
        return;
    }
  }

  first_name_ = user_input[0];
  last_name_ = user_input[1];
  nickname_ = user_input[2];
  phone_number_ = user_input[3];
  darkest_secret_ = user_input[4];

  return;
}

std::string Contact::getFirstName(void) const { return first_name_; }

std::string Contact::getLastName(void) const { return last_name_; }

std::string Contact::getNickName(void) const { return nickname_; }

std::string Contact::getPhoneNumber(void) const { return phone_number_; }

std::string Contact::getDarkestSecret(void) const { return darkest_secret_; }

void Contact::printContact(void) const {
  std::cout << fields[0] << first_name_ << std::endl;
  std::cout << fields[1] << last_name_ << std::endl;
  std::cout << fields[2] << nickname_ << std::endl;
  std::cout << fields[3] << phone_number_ << std::endl;
  std::cout << fields[4] << darkest_secret_ << std::endl;
}

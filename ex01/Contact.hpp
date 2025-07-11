#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

#define FIELD_NUM 5

class Contact {
public:
  void setContact(void);
  std::string getFirstName(void) const;
  std::string getLastName(void) const;
  std::string getNickName(void) const;
  std::string getPhoneNumber(void) const;
  std::string getDarkestSecret(void) const;

  void printContact(void) const;

  static const std::string fields[FIELD_NUM];

private:
  std::string first_name_;
  std::string last_name_;
  std::string nickname_;
  std::string phone_number_;
  std::string darkest_secret_;
};

#endif

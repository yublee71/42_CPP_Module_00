#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACT_NUM 8

#include "Contact.hpp"

class PhoneBook {
public:
  void add(void);
  void search(void) const;

private:
  Contact contacts_[MAX_CONTACT_NUM];
  int index_;
};

#endif

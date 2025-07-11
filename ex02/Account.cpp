#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) { return (Account::_nbAccounts); }

int Account::getTotalAmount(void) { return (Account::_totalAmount); }

int Account::getNbDeposits(void) { return (Account::_totalNbDeposits); }

int Account::getNbWithdrawals(void) { return (Account::_totalNbWithdrawals); }

void Account::displayAccountsInfos(void) {
  Account::_displayTimestamp();
  std::cout << "accounts:" << Account::_nbAccounts << ";"
            << "total:" << Account::_totalAmount << ";"
            << "deposits:" << Account::_totalNbDeposits << ";"
            << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit) {
  _accountIndex = _nbAccounts;
  _amount = initial_deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;
  _nbAccounts++;
  _totalAmount += initial_deposit;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
  int p_amount = _amount;
  _amount += deposit;
  _nbDeposits++;
  Account::_totalAmount += deposit;
  Account::_totalNbDeposits++;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << p_amount << ";"
            << "deposit:" << deposit << ";"
            << "amount:" << _amount << ";"
            << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  int p_amount = _amount;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "p_amount:" << p_amount << ";"
            << "withdrawal:";
  if (p_amount < withdrawal) {
    std::cout << "refused" << std::endl;
    return (false);
  } else {
    _amount -= withdrawal;
    _nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    std::cout << withdrawal << ";"
              << "amount:" << _amount << ";"
              << "nb_withdrawals:" << _nbDeposits << std::endl;
    return (true);
  }
}

int Account::checkAmount(void) const { return (_amount); }

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "deposits:" << _nbDeposits << ";"
            << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
  time_t timestamp = time(NULL);
  struct tm datetime = *localtime(&timestamp);
  char output[10];

  strftime(output, 10, "%Y%m%d", &datetime);
  std::cout << "[" << output << "_";
  strftime(output, 10, "%H%M%S", &datetime);
  std::cout << output << "] ";
}

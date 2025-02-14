#include "Account.hpp"

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
}

Account::~Account(void)
{
}

int Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}
int Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
}

void Account::_displayTimestamp(void)
{
}
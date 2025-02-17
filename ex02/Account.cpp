#include "Account.hpp"

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

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
}

Account::~Account(void)
{
}

void Account::makeDeposit(int deposit)
{
}

bool Account::makeWithdrawal(int withdrawal)
{
}

int Account::checkAmount(void) const
{
}

void Account::displayStatus(void) const
{
}

void Account::_displayTimestamp(void)
{
}

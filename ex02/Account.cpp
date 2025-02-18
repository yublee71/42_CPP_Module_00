#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";"
			  << "total:" << Account::_totalAmount << ";"
			  << "deposits:" << Account::_totalNbDeposits << ";"
			  << "withdrawals:" << Account::_totalNbWithdrawals
			  << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << p_amount << ";"
			  << "deposit:" << deposit << ";"
			  << "amount:" << this->_amount << ";"
			  << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int p_amount = this->_amount;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << p_amount << ";"
			  << "withdrawal:";
	if (p_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		std::cout << withdrawal << ";"
				  << "amount:" << this->_amount << ";"
				  << "nb_withdrawals:" << this->_nbDeposits << std::endl;
		return (true);
	}
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "deposits:" << this->_nbDeposits << ";"
			  << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t timestamp = time(NULL);
	struct tm datetime = *localtime(&timestamp);
	char output[10];

	strftime(output, 10, "%Y%m%d", &datetime);
	std::cout << "[" << output << "_";
	strftime(output, 10, "%H%M%S", &datetime);
	std::cout << output << "] ";
}

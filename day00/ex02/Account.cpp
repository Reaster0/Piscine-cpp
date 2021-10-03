#include "Account.hpp"
#include <iostream>
#include <string>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int Account::getTotalAmount( void )
{
	return _totalAmount;
}

int Account::getNbDeposits( void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" <<  this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void )
{
	time_t now = time(0);
	struct tm *timeinfo;
	char buffer[80];

	timeinfo = localtime(&now);
	strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
}
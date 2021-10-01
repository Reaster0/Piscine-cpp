#include "Account.hpp"
#include <iostream>
#include <string>

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	std::cout << "accounts: " << _nbAccounts << ";total" << _totalAmount << ";deposit" << _totalNbDeposits << ";withdrawals" << _totalNbWithdrawals << std::endl;
}



Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbAccounts = 0;
}


void Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
}

bool Account::makeWithdrawal( int withdrawal )
{
	if (this->_amount < withdrawal)
		return false;
	this->_amount -= withdrawal;
	return true;
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void Account::displayStatus( void ) const
{
	std::cout << this->_accountIndex << std::endl;
}


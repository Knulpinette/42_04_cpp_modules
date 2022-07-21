#include "Account.hpp"
#include <iostream>
#include <ctime>

// Static variables need to be defined at least once for the code to compile
// Should ideally be done in test.cpp though

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos( void )
{
	_displayTimestamp();
    std::cout
        << "accounts:"<< getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
        << std::endl;
}

Account::Account( int initial_deposit )
{
    _displayTimestamp();
	_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts++;
	std::cout 
        << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" 
        << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" 
		<< std::endl;
	_nbAccounts--;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount = _amount;

	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;

	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits 
		<< std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount = _amount;

	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout 
			<< "index:" << _accountIndex
			<< ";p_amount:" << p_amount
			<< ";withdrawal:refused" 
			<< std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;

		_displayTimestamp();
		std::cout 
			<< "index:" << _accountIndex
			<< ";p_amount:" << p_amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbWithdrawals 
			<< std::endl;
		return (true);
	}
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals 
		<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t curr_time = std::time(0);
	char formatted_time[16];

	std::strftime(formatted_time, 16, "%Y%m%d_%H%M%S", std::localtime(&curr_time));
	std::cout << "[" << formatted_time << "] ";
}
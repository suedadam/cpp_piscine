/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyed <asyed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 13:26:26 by asyed             #+#    #+#             */
/*   Updated: 2018/06/30 13:39:30 by asyed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 1;
	Account::_totalNbDeposits++;
	this->_nbWithdrawals = 0;

	std::cout << "Initialized Account " << this->_accountIndex << " Bal: " << this->_amount << std::endl;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

int		Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "=======================" << std::endl;
	std::cout << "| Total Accounts: " << Account::_nbAccounts << std::endl;
	std::cout << "| Total Balance: " << Account::_totalAmount << std::endl;
	std::cout << "| Number of deposits " << Account::_totalNbDeposits << std::endl;
	std::cout << "| Number of withdrawals " << Account::_totalNbWithdrawals << std::endl;
	std::cout << "=======================" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	if (deposit <= 0 || (uint64_t)(this->_amount + deposit) >= 1<<31)
		return ;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal >= this->_amount && withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		return (true);
	}
	return (false);
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	std::cout << "Account Index: " << this->_accountIndex << std::endl;
	std::cout << "Total Balance: " << this->_amount << std::endl;
	std::cout << "Number of deposits: " << this->_nbDeposits << std::endl;
	std::cout << "Number of withdrawals: " << this->_nbWithdrawals << std::endl;
	return ;
}

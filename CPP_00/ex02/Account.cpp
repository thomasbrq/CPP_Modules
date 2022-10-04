/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:16:38 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/26 10:25:07 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;

	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts += 1;
}

Account::~Account(void)
{
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;

	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";

	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;

	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();

	if (this->_amount >= withdrawal)
	{
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";

		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;

		std::cout << "amount:" << this->_amount << ";";

		Account::_totalNbWithdrawals += 1;
		this->_nbWithdrawals += 1;

		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

		return (true);
	}

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:" << "refused" << std::endl;

	return (false);
}

int	Account::checkAmount(void) const
{
	return (1);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [20];

	time (&rawtime);
	timeinfo = localtime (&rawtime);

	strftime (buffer, 20 ,"[%Y%m%d_%H%M%S]",timeinfo);
	std::cout << buffer << " ";
}

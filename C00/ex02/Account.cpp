/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:35:58 by ylachhab          #+#    #+#             */
/*   Updated: 2024/01/11 18:02:32 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
	_nbAccounts--;
	_totalAmount -= _amount;
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" <<_totalAmount << ";deposits:"
	<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals  << std::endl;
}

void Account::makeDeposit(int deposit)
{
	if (deposit > 0)
	{
		_displayTimestamp();
		_nbDeposits++;
		_totalNbDeposits++;
		_totalAmount += deposit;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit
		<< ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
		_amount += deposit;
	}
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal > 0 && _amount - withdrawal >= 0)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal
	 	<< ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		return (true);
	}
	else
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:"
		<< "refused" << std::endl;
	return (false);
}

int Account::checkAmount() const
{
	return (_amount);
}

void Account::_displayTimestamp()
{
	std::time_t c_time = std::time(NULL);
	std::tm* localtime = std::localtime(&c_time);
	char time[20];
	std::strftime(time, 20, "[%Y%m%d_%H%M%S]", localtime);
	std::cout << time << " ";
}

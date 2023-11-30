/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:49:59 by ylachhab          #+#    #+#             */
/*   Updated: 2023/10/29 14:09:29 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//setter function

void Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::setNickName(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNbr(std::string phone_nbr)
{
	this->phone_nbr = phone_nbr;
}

void Contact::setDarkestSecret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

// getter function

std::string Contact::getFirstName()
{
	return (first_name);
}

std::string Contact::getLastName()
{
	return (last_name);
}

std::string Contact::getNickName()
{
	return (nickname);
}

std::string Contact::getPhoneNbr()
{
	return (phone_nbr);
}

std::string Contact::getDarkestSecret()
{
	return (darkest_secret);
}

bool checkWhiteSpace(std::string tmp)
{
	size_t var = tmp.find_first_not_of(" \t");
	if (var != std::string::npos)
		return (false);
	return (true);
}

bool checkTab(std::string tmp)
{
	for (size_t j = 0; j < tmp.length(); j++)
	{
		if (tmp[j] == '\t')
			return (true);
	}
	return (false);
}

void Contact::filePhonebook(Contact *cont)
{
	std::string	tmp;
	do
	{
		std::cout << "\033[33m" << "Enter First name    : " << "\033[0m";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			std::exit(0);
	} while (checkWhiteSpace(tmp) || checkTab(tmp));
	cont->setFirstName(tmp);
	do
	{
		std::cout << "\033[33m" << "Enter Last name     : " << "\033[0m";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			std::exit(0);
	} while (checkWhiteSpace(tmp) || checkTab(tmp));
	cont->setLastName(tmp);
	do
	{
		std::cout << "\033[33m" << "Enter Nickname      : " << "\033[0m";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			std::exit(0);
	} while (checkWhiteSpace(tmp) || checkTab(tmp));
	cont->setNickName(tmp);
	do
	{
		std::cout << "\033[33m" << "Enter Phone number  : " << "\033[0m";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			std::exit(0);
	} while (checkWhiteSpace(tmp) || checkTab(tmp));
	cont->setPhoneNbr(tmp);
	do
	{
		std::cout << "\033[33m" << "Enter Darkes secret : " << "\033[0m";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			std::exit(0);
	} while (checkWhiteSpace(tmp) || checkTab(tmp));
	cont->setDarkestSecret(tmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:59:47 by ylachhab          #+#    #+#             */
/*   Updated: 2023/10/28 18:28:15 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	i = 0;
}

void PhoneBook::addContacts(Contact cont)
{
	contacts[i % 8] = cont;
	i++;
}

void print(Contact contact, int j)
{
	std::cout << "|" <<  std::setw(10) << j;
	if (contact.getFirstName().length() > 10)
		std::cout << "|" << std::setw(10) << contact.getFirstName().substr(0, 9) + ".";
	else
		std::cout << "|" <<  std::setw(10) << contact.getFirstName();

	if (contact.getLastName().length() > 10)
		std::cout << "|" << std::setw(10) << contact.getLastName().substr(0, 9) + ".";
	else
		std::cout << "|" <<  std::setw(10) << contact.getLastName();

	if (contact.getNickName().length() > 10)
		std::cout << "|" << std::setw(10) << contact.getNickName().substr(0, 9) + "." << "|" << std::endl;
	else
		std::cout << "|" <<  std::setw(10) << contact.getNickName() << "|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

void PhoneBook::displayContacts()
{
	if (i != 0)
	{
		std::cout << "+----------+----------+----------+----------+" << std::endl;
		std::cout << "|" << std::setw(10) << "Index";
		std::cout << "|" << std::setw(10) << "First Name";
		std::cout << "|" << std::setw(10) << "Last Name";
		std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
		std::cout << "+----------+----------+----------+----------+" << std::endl;
	}
	for (int j = 0; j < i && j < 8; j++)
		print(contacts[j], j);
}

int isNumber(std::string str)
{
	for (size_t j = 0; j < str.length(); j++)
	{
		if (!isdigit(str[j]))
			return (1);
	}
	return (0);
}

void PhoneBook::getContacts()
{
	std::string num;
	if (i != 0)
	{
		std::cout << "\033[35m" << "Enter the index of the contact : " << "\033[0m";
		std::getline(std::cin, num);
		if (std::cin.eof())
			std::exit(0);
		if (isNumber(num) || num.length() == 0)
		{
			std::cout << "\033[31m" << "Error in the index " << "\033[0m" << std::endl;
			return ;
		}
		int index = std::atoi(num.c_str());
		if (index > 7 || index < 0 || index > i - 1)
		{
			std::cout << "\033[31m" << "This index is not existe " << "\033[0m" << std::endl;
			return ;
		}
		else
		{
			std::cout << "Index          : " << index << std::endl;
			std::cout << "First name     : " << contacts[index].getFirstName() << std::endl;
			std::cout << "Last name      : " << contacts[index].getLastName() << std::endl;
			std::cout << "Nickname       : " << contacts[index].getNickName() << std::endl;
			std::cout << "Phone number   : " << contacts[index].getPhoneNbr() << std::endl;
			std::cout << "Darkest secret : " << contacts[index].getDarkestSecret() << std::endl;
		}
	}
	else
	{
		std::cout << "\033[31m" << "Empty phonebook " << "\033[0m" << std::endl;
		return ;
	}

}

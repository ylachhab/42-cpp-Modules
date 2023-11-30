/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:40:53 by ylachhab          #+#    #+#             */
/*   Updated: 2023/10/28 17:14:22 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phone;
	while (true)
	{
		Contact cont;
		std::string command;
		std::cout << "\033[34m" << "Enter command : \"ADD\" or \"SEARCH\" or \"EXIT\" : " << "\033[0m";
		std::getline(std::cin, command);
		if (std::cin.eof())
			std::exit(0);
		if (command == "ADD")
		{
			cont.filePhonebook(&cont);
			phone.addContacts(cont);
		}
		else if (command == "SEARCH")
		{
			phone.displayContacts();
			phone.getContacts();
		}
		else if (command == "EXIT")
		{
			std::cout << "exit" << std::endl;
			break;
		}
		else
		{
			std::cout << "\033[31m" << "Your commant is not available \n" << "\033[0m";
			std::cout << "\033[31m" << "Please try again :) \n" << "\033[0m";
		}
	}
}
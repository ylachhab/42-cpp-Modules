/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:05:01 by ylachhab          #+#    #+#             */
/*   Updated: 2023/10/28 18:11:25 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_nbr;
		std::string	darkest_secret;
	public :
		void		setFirstName(std::string first_name);
		void		setLastName(std::string last_name);
		void		setNickName(std::string nickname);
		void		setPhoneNbr(std::string phone_nbr);
		void		setDarkestSecret(std::string darkest_secret);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNbr();
		std::string	getDarkestSecret();
		void		filePhonebook(Contact *cont);
};

#endif
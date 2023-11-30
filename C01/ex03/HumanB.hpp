/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:37:33 by ylachhab          #+#    #+#             */
/*   Updated: 2023/10/31 11:47:24 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private :
		Weapon		*Weap;
		std::string	name;
	public :
		HumanB(std::string name);
		void	setWeapon(Weapon &Wea);
		void	attack(void);
};

#endif
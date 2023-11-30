/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:48:36 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/08 18:24:28 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->Weap = NULL;
	this->name = name;
}

void HumanB::setWeapon(Weapon &Wea)
{
	Weap = &Wea;
}

void HumanB::attack(void)
{
	if (Weap == NULL) {
		std::cout << "HumanB is unarmed!" << std::endl;
	}
	else {
		std::cout << "HumanB attacks with their " << Weap->getType() << std::endl;
	}
}
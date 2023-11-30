/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:17:18 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/26 15:54:33 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
	std::cout << "Default constructor of DiamondTrap called" << std::endl;
	//
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"){
	std::cout << "Constructor parametrize of DiamandTrap called" << std::endl;
	this->_name = name;
	ClapTrap::_points = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) {
	std::cout << "Copy constructor of DiamondTrap called" << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Destructor of DiamondTrap called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj) {
	std::cout << "Copy assegnment operator of DiamondTrap called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		ClapTrap::_name = obj._name;
		ClapTrap::_points = obj._points;
		ClapTrap::_energyPoints = obj._energyPoints;
		ClapTrap::_attackDamage = obj._attackDamage;
	}
	return(*this);
}

void DiamondTrap::attack(std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
	std::cout << "DiamodTrap name is " << this->_name << std::endl;
}

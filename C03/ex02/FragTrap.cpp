/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:23:19 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/18 12:43:46 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Default constructor of FragTrap called" << std::endl;
	this->_name = "none";
	this->_points = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "Constructor parametrise of FragTrap called" << std::endl;
	this->_name = name;
	this->_points = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &obj) {
	std::cout << "Copy constractor of FragTrap called" << std::endl;
	*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor of FragTarp called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_points = obj._points;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return (*this);
}

void FragTrap::attack(std::string &target) {
	if (_energyPoints > 0)
	{
		std::cout << "FragTrap " << this->_name << " attack " << target
		<< ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap hight fives !" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:42:43 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/20 11:39:18 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Default constructor of ScavTrap called" << std::endl;
	this->_name = "none";
	this->_points = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "Constructor parametrise of ScavTrap called" << std::endl;
	this->_name = name;
	this->_points = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
	std::cout << "Copy constructor of ScavTrap called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destractor of ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj){
	std::cout << "Copy assignment operator of ScavTrap called" << std::endl;
	if (this != &obj)
	{
		this->_points =  100;
		this->_energyPoints = 50;
		this->_attackDamage = 20;
	}
	return (*this);
}

void ScavTrap::attack(std::string &target) {
	if (_energyPoints > 0 && _points > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		_energyPoints--;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode !" << std::endl;
}
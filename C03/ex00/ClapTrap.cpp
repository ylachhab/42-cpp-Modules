/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:51:05 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/20 11:54:39 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _points(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
	this->_name = "none";
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Constructor parameterise called" << std::endl;
	this->_name = name;
	this->_points = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj){
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
	std::cout << "Copy assignment called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_attackDamage = obj._attackDamage;
		this->_energyPoints = obj._energyPoints;
		this->_points = obj._points;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target){
	if (this->_energyPoints > 0 && _points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage !" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_points > 0)
	{
		_points = _points - amount >= 0 ?_points - amount : 0;
		std::cout << "ClapTrap " << _name << " lost point in take damage, its points "
		<< _points << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints > 0 && _points > 0)
	{
		_points += amount;
		std::cout << "ClapTrap " << _name << " recover an amount, its points "
		<< _points << std::endl;
		_energyPoints--;
	}
}

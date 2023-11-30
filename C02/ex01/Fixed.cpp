/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:15:13 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/15 09:49:35 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBit = 8;

Fixed::Fixed() : _nbrFixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &F) {
	std::cout << "Copy constructor called" << std::endl;
	*this = F;
}

Fixed::Fixed(const int nbr) {
	std::cout << "Int constructor called" << std::endl;
	this->_nbrFixed = nbr << _fractBit;
}

Fixed::Fixed(const float nbr) {
	std::cout << "Float constructor called" << std::endl;
	this->_nbrFixed = roundf(nbr * (1 << _fractBit));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &F) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &F)
		this->_nbrFixed = F._nbrFixed;
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_nbrFixed);
}

void Fixed::setRawBits(int const raw) {
	_nbrFixed = raw;
}

int Fixed::toInt(void) const {
	return (_nbrFixed >> _fractBit);
}

float Fixed::toFloat(void) const {
	return((float)_nbrFixed / (1 << _fractBit));
}

std::ostream& operator<<(std::ostream& os, const Fixed &F) {
	os << F.toFloat();
	return (os);
}
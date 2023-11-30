/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:15:13 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/26 14:40:04 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractBit = 8;

Fixed::Fixed() : _nbrFixed(0) {
}

Fixed::Fixed(const Fixed &F) {
	*this = F;
}

Fixed::Fixed(const int nbr) {
	this->_nbrFixed = nbr << _fractBit;
}

Fixed::Fixed(const float nbr) {
	this->_nbrFixed = roundf(nbr * (1 << _fractBit));
}

Fixed::~Fixed() {
}

Fixed& Fixed::operator=(const Fixed &F) {
	if (this != &F)
		this->_nbrFixed = F._nbrFixed;
	return (*this);
}

int Fixed::getRawBits(void) const {
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

bool Fixed::operator<(const Fixed & obj) const{
	return (this->_nbrFixed < obj._nbrFixed);
}

bool Fixed::operator>(const Fixed & obj) const{
	return (this->_nbrFixed > obj._nbrFixed);
}

bool Fixed::operator>=(const Fixed & obj) const{
	return (this->_nbrFixed >= obj._nbrFixed);
}

bool Fixed::operator<=(const Fixed & obj) const{
	return (this->_nbrFixed <= obj._nbrFixed);
}

bool Fixed::operator==(const Fixed & obj) const{
	return (this->_nbrFixed == obj._nbrFixed);
}

bool Fixed::operator!=(const Fixed & obj) const{
	return (this->_nbrFixed != obj._nbrFixed);
}

Fixed Fixed::operator+(const Fixed & obj) const{
	Fixed ret(toFloat() + obj.toFloat());
	return (ret);
}

Fixed Fixed::operator-(const Fixed & obj) const{
	Fixed ret(toFloat() - obj.toFloat());
	return (ret);
}

Fixed Fixed::operator*(const Fixed & obj) const{
	Fixed ret(toFloat() * obj.toFloat());
	return (ret);
}

Fixed Fixed::operator/(const Fixed & obj) const{
	Fixed ret(toFloat() / obj.toFloat());
	return (ret);
}

Fixed& Fixed::operator++(){
	++_nbrFixed;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);
	++_nbrFixed;
	return (tmp);
}

Fixed& Fixed::operator--(){
	--_nbrFixed;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);
	--_nbrFixed;
	return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
	if (a <= b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a <= b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
	if (a >= b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
	if (a >= b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& os, const Fixed &F) {
	os << F.toFloat();
	return (os);
}
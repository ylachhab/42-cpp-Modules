/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:41:50 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/24 15:00:53 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private :
		int _nbrFixed;
		static const int _fractBit;
	public :
		Fixed();
		Fixed(const Fixed &F);
		Fixed(const int nbr);
		Fixed(const float floatnbr);
		~Fixed();
		Fixed& operator=(const Fixed& F);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator<(const Fixed & obj) const;
		bool operator>(const Fixed & obj) const;
		bool operator>=(const Fixed & obj) const;
		bool operator<=(const Fixed & obj) const;
		bool operator==(const Fixed & obj) const;
		bool operator!=(const Fixed & obj) const;
		Fixed operator+(const Fixed & obj) const;
		Fixed operator-(const Fixed & obj) const;
		Fixed operator*(const Fixed & obj) const;
		Fixed operator/(const Fixed & obj) const;
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& F);

#endif
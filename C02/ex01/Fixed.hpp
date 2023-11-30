/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:41:50 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/14 10:23:01 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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
		Fixed& operator = (const Fixed& F);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& F);

#endif
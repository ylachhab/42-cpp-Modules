/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:41:50 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/15 09:34:39 by ylachhab         ###   ########.fr       */
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
		~Fixed();
		Fixed& operator = (const Fixed& F);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
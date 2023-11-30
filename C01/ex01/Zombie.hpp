/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:16:21 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/08 17:58:59 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private :
		std::string name;
	public :
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif
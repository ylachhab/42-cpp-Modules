/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:30:37 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/02 19:06:11 by ylachhab         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
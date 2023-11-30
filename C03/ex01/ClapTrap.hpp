/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:42:35 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/20 10:25:58 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"

class ClapTrap {
	protected :
		std::string _name;
		unsigned int _points;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &obj);
		ClapTrap& operator = (const ClapTrap &obj);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

};
#endif
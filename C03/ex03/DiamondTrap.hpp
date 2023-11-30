/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:59:03 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/20 10:28:37 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap {
	private :
		std::string _name;
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap& operator=(const DiamondTrap &obj);
		~DiamondTrap();
		void whoAmI();
		void attack(std::string &target);
};

#endif
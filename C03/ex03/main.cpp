/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:42:03 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/26 15:51:55 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap f("test");
	DiamondTrap s;
	s = f;
	f.whoAmI();
	s.whoAmI();
	// DiamondTrap j;
	// std::string t = "hhh";
	// j.attack(t);
	// DiamondTrap opp("opp");
	// opp.whoAmI();
}
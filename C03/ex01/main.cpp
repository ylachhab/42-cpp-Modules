/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:42:03 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/20 11:57:18 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap yasmine("yasmine");
	ClapTrap obj3(yasmine);
	obj3.attack("foo");
	obj3.takeDamage(10);
	obj3.beRepaired(5);
	yasmine.attack("lool");
	yasmine.takeDamage(10);
	yasmine.beRepaired(5);

	ScavTrap pop("pop");

	std::string t = "loop";
	pop.attack(t);
	pop.takeDamage(10);
	pop.beRepaired(5);
	pop.guardGate();
}
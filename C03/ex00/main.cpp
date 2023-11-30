/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:42:03 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/20 11:56:08 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap pop("pop");
	ClapTrap yasmine("yasmine");
	ClapTrap obj3(pop);
	pop.attack("foo");
	pop.takeDamage(10);
	pop.beRepaired(5);
	yasmine.attack("lool");
	yasmine.takeDamage(10);
	yasmine.beRepaired(5);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:32:20 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/02 08:57:48 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &we) : Wea(we)
{
	name = str;
}

void HumanA::attack(void)
{
	std::cout << "HumanA attaks with their " << Wea.getType() << std::endl;
}
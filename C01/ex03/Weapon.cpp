/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:45:33 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/02 09:08:59 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	std::cout << str << std::endl;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType()
{
	return (type);
}
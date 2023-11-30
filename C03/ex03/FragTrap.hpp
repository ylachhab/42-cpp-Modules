/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:19:17 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/20 11:44:23 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAPTRAP_HPP
#define FRAPTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public :
		FragTrap();
		FragTrap(const FragTrap &obj);
		FragTrap(std::string name);
		FragTrap& operator=(const FragTrap &obj);
		~FragTrap();
		void highFivesGuys(void);
		void attack(std::string &target);
};

#endif
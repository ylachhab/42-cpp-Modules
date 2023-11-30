/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:19:17 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/20 10:27:21 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
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
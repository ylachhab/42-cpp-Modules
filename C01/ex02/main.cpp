/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:41:40 by ylachhab          #+#    #+#             */
/*   Updated: 2024/01/18 11:26:11 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


template <typename T> 

T& f1(T &a, T& b){
	return (a >= b ? b : a);
}

int main()
{
	std::string a = "HI THIS IS BRAIN";
	std::string b = "HI THIS IS BRAIN";
	std::string &r = f1(a , b);
	
	std::cout << "The memory address of the a variable : " << &a << std::endl;
	std::cout << "The memory address of the b variable : " << &b << std::endl;
	std::cout << "The memory address of the r variable : " << &r << std::endl;
}
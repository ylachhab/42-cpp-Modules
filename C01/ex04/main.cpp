/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:49:13 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/04 08:43:53 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Error in the argement \n";
	else
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		if (checkFile(filename) == false)
		{
			std::cout << "File does not exist" << std::endl;
			return (0);
		}
		std::string tmp = copyFile(filename);
		replaceString(tmp, s1, s2);
		std::string copyfile = filename + ".replece";
		returnFile(tmp, copyfile);
	}
}
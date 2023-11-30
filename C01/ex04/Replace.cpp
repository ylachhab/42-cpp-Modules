/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:20:52 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/08 18:42:20 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

bool checkFile(std::string filename)
{
	std::ifstream file(filename);
	return (file.good());
}


std::string copyFile(std::string file)
{
	std::ifstream source(file);
	std::string content;
	while (std::getline(source, content, '\0'));
	source.close();
	return (content);
}

void replaceString(std::string &tmp, std::string s1, std::string s2)
{
	size_t found = 0;
	if (s1.empty())
		return;
	while ((found = tmp.find(s1, found)) != std::string::npos)
	{
		tmp.erase(found, s1.length());
		tmp.insert(found, s2);
		found += s2.length();
	}
}

void returnFile(std::string tmp, std::string copy)
{
	std::ofstream dest(copy);
	if (dest.is_open())
	{
		dest << tmp;
		dest.close();
	}
	else
	{
		dest.close();
		std::cout << "Error in file\n";
	}
}

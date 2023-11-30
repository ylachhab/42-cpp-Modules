/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylachhab <ylachhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:47:46 by ylachhab          #+#    #+#             */
/*   Updated: 2023/11/08 18:39:30 by ylachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

bool checkFile(std::string filename);
std::string copyFile(std::string file);
void replaceString(std::string &tmp, std::string s1, std::string s2);
void returnFile(std::string tmp, std::string copy);

#endif
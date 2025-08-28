/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:51:21 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 17:03:52 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string myString;
	std::string *stringPTR;

	myString = "HI THIS IS BRAIN";
	stringPTR = &myString;
	std::string &stringREF = *stringPTR;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valeu pointed to by stringREF: " << stringREF << std::endl;
}
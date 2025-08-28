/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:42:25 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 21:19:39 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl		harl;
	std::string	level;
	
	if (argc == 2)
	{
		level = argv[1];
		switch (harl.getLevel(argv[1]))
		{
			case DEBUG:
				harl.complain("DEBUG");
			case INFO:
				harl.complain("INFO");
			case WARNING:
				harl.complain("WARNING");
			case ERROR:
				harl.complain("ERROR");
				break;
			default:
				std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
	else
		std::cerr << "Correct usage: ./harlFilter <level>" << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:42:13 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 21:21:05 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

int		Harl::getLevel(std::string level)
{
	if (level == "DEBUG")
		return (DEBUG);
	else if (level == "INFO")
		return (INFO);
	else if (level == "WARNING")
		return (WARNING);
	else if (level == "ERROR")
		return (ERROR);
	else
		return (UNKNOWN);
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[])() = {&Harl::debug, &Harl::info,
		&Harl::warning, &Harl::error}; 
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "[UNKNOWN] Level not found!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nCampaign data loaded.\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nNew social media post scheduled for next week.\n"
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nAd money is almost gone. You should move some funds.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nAds stopped running! Fix it now!\n" << std::endl;
}
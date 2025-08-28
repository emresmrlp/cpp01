/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:08:25 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 18:19:51 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name)
{
	this->weapon = NULL;
	return ;
}

HumanB::HumanB(const std::string &name, Weapon *weapon)
	: name(name), weapon(weapon)
{
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if (this->weapon)
	{	
		std::cout << this->name << " " << "attacks with their"
			<< " " << this->weapon->getType() << std::endl;
	}
	else
	{
		std::cout << this->name << " " << "has no weapon, so cant attack... :(" << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:08:26 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 18:09:08 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(const std::string &name);
	HumanB(const std::string &name, Weapon *weapon);
	void setWeapon(Weapon &weapon);
	void attack();
private:
	std::string	name;
	Weapon		*weapon;
};
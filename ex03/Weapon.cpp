/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:08:30 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 18:06:17 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	return ;
}

void Weapon::setType(const std::string &type)
{
	this->type = type;
}

const std::string &Weapon::getType() const
{
	return (this->type);
}
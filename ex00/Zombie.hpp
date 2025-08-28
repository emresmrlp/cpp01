/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:58:52 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 16:04:18 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie();
	Zombie(std::string name);
	std::string getName(void) const;
	void announce(void);
private:
	std::string	name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

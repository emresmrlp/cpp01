/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:58:52 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 19:40:42 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	std::string getName(void) const;
	void		setName(std::string name);
	void announce(void);
private:
	std::string	name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

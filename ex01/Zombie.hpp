/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:29:54 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 16:29:55 by ysumeral         ###   ########.fr       */
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

Zombie* zombieHorde(int N, std::string name);

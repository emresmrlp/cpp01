/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:27:50 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 16:47:09 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	Zombie *twdZombies;
	int zombiesCount;
	int twdZombiesCount;

	std::cout << "-> 8 zombies are coming!!" << std::endl;
	zombiesCount = 3;
	twdZombiesCount = 5;
	zombies = zombieHorde(zombiesCount, "Foo");
	twdZombies = zombieHorde(twdZombiesCount, "Rick");
	for (int i = 0; i < zombiesCount; i++)
		zombies[i].announce();
	for (int i = 0; i < twdZombiesCount; i++)
		twdZombies[i].announce();
	std::cout << "-> Ohh, they are going to the other side. We can end the program. :)"
		<< std::endl;
	delete[] zombies;
	delete[] twdZombies;
}
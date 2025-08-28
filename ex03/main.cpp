/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:07:51 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 18:17:40 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	std::cout << "-> Fight is starting!!" << std::endl;
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	club.setType("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	HumanB foo("Foo");
	Weapon hammer42 = Weapon("42 Hammer of the Bloody Cadet");
	HumanA emre("Emre", hammer42);
	foo.attack();
	emre.attack();
	std::cout << "-> Fight ended, see u soon!!" << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:03:53 by ysumeral          #+#    #+#             */
/*   Updated: 2025/08/28 16:04:35 by ysumeral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *foo;
	Zombie *emre;

	std::cout << "Zombie Foo and Zombie Emre saying..." << std::endl;
	foo = newZombie("Foo");
	emre = newZombie("Emre");
	foo->announce();
	emre->announce();
	std::cout << "And Zombie Yunus say..." << std::endl;
	randomChump("Yunus");
	std::cout << "Foo, Emre, and Yunus set out to search for Rick Grimes, and the program ends here. :)"
		<< std::endl;
	delete foo;
	delete emre;
}

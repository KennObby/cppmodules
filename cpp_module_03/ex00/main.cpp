/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:08:26 by oilyine-          #+#    #+#             */
/*   Updated: 2025/08/01 17:11:09 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main() {

	std::cout << "\n--- Creating ClapTraps ----\n";
	ClapTrap	Oleg("Alpha");
	ClapTrap	Le_J("Bravo");
	ClapTrap	Bilal("Charlie");

	std::cout << "\n--- Testing attacks ---\n";
	for (int i = 0; i < 11; ++i) {
		Oleg.attack("Bravo");
	}
	
	std::cout << "\n--- Testing takeDamage ---\n";
	Le_J.takeDamage(3);
	Le_J.takeDamage(4);
	Le_J.takeDamage(10);

	std::cout << "\n--- Testing repairs ---\n";
	Bilal.beRepaired(3);
	for (int i = 0; i < 10; ++i) {
		Bilal.beRepaired(3);
	}
	Bilal.beRepaired(5);

	std::cout << "\n--- Testing copy constructor ---\n";
	ClapTrap	Melvin(Oleg);
	Melvin.attack("Delta");

	std::cout << "\n--- Testing assignement operator ---\n";
	ClapTrap	Eliot("Echo");
	Eliot = Le_J;
	Eliot.takeDamage(2);

	std::cout << "\n--- End of Tests ---\n";
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 13:44:03 by oilyine-          #+#    #+#             */
/*   Updated: 2025/08/24 13:54:21 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

int main() {
	std::cout << "\n --- Creating ClapTraps --- \n";
	ClapTrap	Bilal("Alpha", 10, 1, 1);
	ClapTrap	Deby("Bravo", 10, 1, 1);
	ClapTrap	Melvin("Charlie", 10, 1, 1);


	std::cout << "\n --- Creating ScavTraps ---\n";
	ScavTrap	Oleg("Lego");
	ScavTrap	Le_J("Julius");
	ScavTrap	Eliot("Orvalius");

	std::cout << "\n --- Testing attacks ---\n";
	for (int i = 0; i < 120; i++) {
		Oleg.attack("Orvalius");
		Le_J.attack("Lego");
		Eliot.attack("Julius");
	}
	for (int i = 0; i < 11; i++) {
		Bilal.attack("Bravo");
		Deby.attack("Charlie");
	}
	//std::cout << "\n--- Testing takeDamage ---\n";
}

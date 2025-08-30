/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 11:43:01 by oilyine-          #+#    #+#             */
/*   Updated: 2025/08/24 13:32:41 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name, /*hp*/100, /*en*/50, /*dm*/20)
{
	std::cout << "ScavTrap ( " << name << ") constructed. " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) 
	: ClapTrap(other) {	
		std::cout << "ScavTrap copy constructed. " << std::endl;
		*this = other;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) ClapTrap::operator=(other);
	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (getEnergyPoints() <= 0) {
		std::cout << "ScavTrap " << getName() << " has no energy! " << std::endl;
		return ;
	}
	if (getHitPoints() <= 0) {
		std::cout << "ScavTrap" << getName() << "has no HP! " << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " winds up a heavy strike! " << std::endl;
	ClapTrap::attack(target);
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << "is now in Gate Keeper mode. " << std::endl;
}

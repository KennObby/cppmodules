/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:59:39 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/29 18:26:37 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
	: 	_name(""), _hit_points(0),
		_energy_points(10), _attack_dmg(1) {

	std::cout << "Deflault Constructor " << this->_name << " is called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) 
	:	_name(""), _hit_points(0),
		_energy_points(10), _attack_dmg(1) {

	std::cout << "Copy constructor" << other._name << " is called." << std::endl;
	*this = other;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_energy_points <= 0) {
		std::cout << "ClapTrap " << this->_name
		<< "has no more energy points! leaving..." << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ClapTrap" << this->_name
		<< "has no more hit points! leaving..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks "
	<< target << "causing this " << this->_attack_dmg << " amount of damage." << std::endl;
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energy_points <= 0) {
		std::cout << "ClapTrap " << this->_name
		<< "has no more energy points! leaving..." << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ClapTrap" << this->_name
		<< "has no more hit points! leaving..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap" << this->_name << " took this " << this->_attack_dmg << " dmg." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_dmg = other._attack_dmg;
	return (*this);
}

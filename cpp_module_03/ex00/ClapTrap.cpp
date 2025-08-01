/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:59:39 by oilyine-          #+#    #+#             */
/*   Updated: 2025/08/01 15:36:40 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>
#include <string>

ClapTrap::ClapTrap()
	: 	_name(""), _hit_points(10),
		_energy_points(10), _attack_dmg(1) {

	std::cout << "Deflault ClapTrap " << this->_name
	<< " is called." << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &other) 
	:	_name(""), _hit_points(10),
		_energy_points(10), _attack_dmg(1) {

	std::cout << "ClapTrap copy " << other._name
	<< " is called." << std::endl;
	*this = other;
}

ClapTrap::ClapTrap(std::string name)
	:	_name(name), _hit_points(10),
		_energy_points(10), _attack_dmg(1) {
			
	std::cout << "Claptrap " << this->_name
	<< " is created ! "<< std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}


void	ClapTrap::attack(const std::string& target) {
	if (this->_energy_points <= 0) {
		std::cout << "ClapTrap " << this->_name
		<< " has no more energy points! leaving..." << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ClapTrap " << this->_name
		<< " has no more hit points! leaving..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks "
	<< target << " causing this " << this->_attack_dmg
	<< " amount of damage." << std::endl;
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energy_points <= 0) {
		std::cout << "ClapTrap " << this->_name
		<< " has no more energy points! leaving..." << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ClapTrap " << this->_name
		<< " has no more hit points! leaving..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " took this "
	<< this->_attack_dmg << " amount of dmg." << std::endl;
	this->_hit_points -= (int)amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points > 10) {
		std::cout << "ClapTrap " << this->_name
		<< " has reach max energy points! leaving... " << std::endl;
		return ;
	}
	this->_hit_points += (int)amount;
	this->_energy_points--;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_dmg = other._attack_dmg;
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:59:39 by oilyine-          #+#    #+#             */
/*   Updated: 2025/08/24 13:58:39 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
	: 	_name(""), _hit_points(0),
		_energy_points(10), _attack_dmg(1) {

	std::cout << "Default Constructor " << this->_name << " is called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, int hp, int en, int dm) 
: _name(name), _hit_points(hp), _energy_points(en), _attack_dmg(dm) {
	std::cout << "ClapTrap ( " << _name << ") contructed with stats." << std::endl; 
};

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap( " << _name << " ) got destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) 
	:	_name(""), _hit_points(0),
		_energy_points(10), _attack_dmg(1) {

	std::cout << "Copy constructor" << other._name << " is called." << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_dmg = other._attack_dmg;
	return (*this);
}

const char* ClapTrap::role() const { return "ClapTrap"; }

void	ClapTrap::attack(const std::string& target) {
	if (this->_energy_points <= 0) {
		std::cout << "ClapTrap " << this->_name
		<< " has no more energy points! leaving..." << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ClapTrap" << this->_name
		<< " has no more hit points! leaving..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks "
	<< target << "causing " << this->_attack_dmg << " amount of damage." << std::endl;
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energy_points <= 0) {
		std::cout << role() << " " << this->_name
		<< " has no more energy points! leaving..." << std::endl;
		return ;
	}
	if (this->_hit_points <= 0) {
		std::cout << "ClapTrap" << this->_name
		<< " has no more hit points! leaving..." << std::endl;
		return ;
	}
	int dmg = static_cast<int>(amount);
	this->_hit_points = (this->_hit_points > dmg) ? (this->_hit_points - dmg) : 0;
	std::cout << role() << this->_name << " took " << this->_attack_dmg << " dmg."
	<< " HP now " << this->_hit_points << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points > 10) {
		std::cout << "ClapTrap " << this->_name
		<< " has reach max energy points! leaving... " << std::endl;
		return ;
	}
	this->_hit_points += static_cast<int>(amount);
	this->_energy_points--;
}

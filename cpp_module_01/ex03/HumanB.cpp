/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:27:12 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/17 20:30:06 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL) {

	this->_name = name;
	std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB() {
	if (this->_weapon)
		std::cout << "HumanB " << this->_name << " get destroyed " << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack with " << std::endl;
}

void	HumanB::attack() {
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " <<
			this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack with" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

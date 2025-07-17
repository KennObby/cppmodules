/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:10:35 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/17 20:30:12 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

	std::cout << "HumanA " << name << " created with ";
	std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA " << this->_name << " get destroyed " << std::endl;
}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with his " << \
		this->_weapon.getType() << std::endl;
}

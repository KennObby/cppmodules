/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:45:07 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/17 19:27:42 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type)
	: _type(type) {}


Weapon::~Weapon() {}

void	Weapon::setType(const std::string& type) {
	this->_type = type;
}

const std::string&	Weapon::getType() const{
	return (this->_type);
}

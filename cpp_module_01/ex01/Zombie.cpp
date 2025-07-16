/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:14:38 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/16 21:23:17 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Unnamed") {}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << "  has been destroyed." << std::endl;
}

void	Zombie::announce()
{
	std::cout << " BraiiiiiiinnnzzzZ.. " << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

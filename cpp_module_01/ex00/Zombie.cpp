/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:14:38 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/16 18:17:50 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " has been created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << "  has been destroyed." << std::endl;
}

void	Zombie::announce()
{
	std::cout << " BraiiiiiiinnnzzzZ.. " << std::endl;
}

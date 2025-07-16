/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:21:23 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/16 18:25:34 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* newZombie pointer to Zombie object allocated in newZombie.cpp */
Zombie	*newZombie(std::string name);

//Zombie stored in the heap
void	randomChump(std::string name);

int	main(void)
{
	Zombie *z = newZombie("Eliot");
	z->announce();
	randomChump("Le J");
	delete z;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 21:23:51 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/16 21:32:02 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		zombieNbr = 10;

	horde = zombieHorde(zombieNbr, "Horde Gang");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < zombieNbr ; ++i) {
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}

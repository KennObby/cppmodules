/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:21:05 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/23 18:23:06 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char** av) {
	if (ac != 2) {
		std::cout << "Usage: ./main LEVEL" << std::endl;
		return (1);
	}

	Harl	harl;

	harl.complainFilter(av[1]);
}

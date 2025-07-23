/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:41:16 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/23 15:43:39 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

typedef void (Harl::*ptr)();

void	Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<
		std::endl;
}

void	Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	Harl::getLevelIndex(std::string level) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			return i;
		}
	}
	return (-1);
}

void	Harl::complainFilter(std::string level) {
	/*ptr functions[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};*/
	int	index = getLevelIndex(level);

	switch (index) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			debug();
			/* fallthrough */
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			info();
			/* fallthrough */
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			warning();
			/* fallthrough */
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 17:05:17 by oilyine-          #+#    #+#             */
/*   Updated: 2025/05/25 17:39:18 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <ostream>
#include <string>

int main () {
	Phonebook phonebook;
	std::string	command;

	while (true) {
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command)) {
			std::cout << "\nEOF detected. Exiting phonebook." << std::endl;
			break ;
		}

		if (command == "ADD")
			phonebook.add_contacts();
		else if (command == "SEARCH")
			phonebook.search_contacts();
		else if (command == "EXIT") {
			phonebook.exit_phonebook();
			break ;
		}
		else 
			std::cout << "Invalid Command" << std::endl;
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:52:21 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/17 17:04:26 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "		Memory address of string: " << &string << std::endl;
	std::cout << "		Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "		Memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << " ====================================================================== " << std::endl;
	std::cout << "		The value of the string variable: " << string << std::endl;
	std::cout << "		The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "		The value pointed to by stringREF: " << stringREF << std::endl;
}

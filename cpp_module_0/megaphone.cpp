/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:11:54 by oilyine-          #+#    #+#             */
/*   Updated: 2025/04/07 14:16:17 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <cstdlib>
#include <ios>
#include <iostream>

int main()
{
	const size_t SIZE = 1024;
	char*	test = (char *)malloc(SIZE);

	if (!test)
	{
		std::cerr << "Failing allocating memory";
		return (1);
	}
	std::cout << "Type something: ";
	std::cin.getline(test, SIZE);
	std::cout << std::uppercase << test << "\n";
	return (0);
}

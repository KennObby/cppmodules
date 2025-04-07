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

#include <cctype>
#include <cstring>
#include <iostream>
#include <ostream>

int main(int ac, char **av)
{
	
	if (ac < 2)
	{
		std::cerr << "* LOUD AND UNBERABLE FEEDBACK NOISE *";
	}
	for (int i = 1; i < ac ; i++)
	{
		for (size_t j = 0; j < strlen(av[i]); j++)
		{
			std::cout << (char)toupper(av[i][j]);
		}
		if (i < ac - 1)
			std::cout << " ";
	}
	std::cout << "\n";
	return (0);
}

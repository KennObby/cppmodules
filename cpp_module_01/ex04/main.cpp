/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:43:31 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/23 14:06:05 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

std::string	custom_replace(std::string line, std::string s1, std::string s2)
{
	std::string	result = "";
	std::size_t	pos = 0;

	while (pos < line.length()) {
		std::size_t match_pos = line.find(s1, pos);
		if (match_pos == std::string::npos) {
			result += line.substr(pos);
			break ;
		}
		result += line.substr(pos, match_pos - pos);
		result += s2;
		pos = match_pos + s1.length();
	}
	return (result);
}

void	process_file(std::string filename, std::string s1, std::string s2) {
	std::string line = "";
	std::ifstream input_file(filename.c_str(), std::ios::binary);
	if (!input_file) {
		std::cout << "Error: cannot open input file" << std::endl;
		exit(1);
	}
	std::ofstream output_file((filename + ".replace").c_str(), std::ios::binary);
	if (!output_file) {
		std::cout << "Error: cannot create output file" << std::endl;
		exit(1);
	}
	while (std::getline(input_file, line)) {
		std::string replaced_line = custom_replace(line, s1, s2);
		output_file << replaced_line << std::endl;
	}
}

int	main(int ac, char** av) {
	if (ac != 4) {
		std::cout << "Wrong args! Usage <program> <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string		filename = av[1];
	std::string		s1 = av[2];
	std::string		s2 = av[3];

	if (s1.empty()) {
		std::cout << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}
	process_file(filename, s1, s2);
	return (0);
}

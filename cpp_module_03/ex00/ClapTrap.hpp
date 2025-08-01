/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:50:26 by oilyine-          #+#    #+#             */
/*   Updated: 2025/08/01 15:33:07 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	private:
		std::string _name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_dmg;

	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &);
		ClapTrap &operator=(const ClapTrap &);

		ClapTrap(std::string name);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif

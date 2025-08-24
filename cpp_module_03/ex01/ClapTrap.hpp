/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:50:26 by oilyine-          #+#    #+#             */
/*   Updated: 2025/08/24 12:15:27 by oilyine-         ###   ########.fr       */
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
		ClapTrap(const std::string& name, int hp, int en, int dm);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap &);
		ClapTrap &operator=(const ClapTrap &);
		
		virtual void		attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		const std::string&	getName() { return _name; }
		int					getAttackDamage() const { return _attack_dmg; }
		int					getHitPoints() const { return _hit_points; }
		int					getEnergyPoints() const { return _energy_points; }
};

#endif

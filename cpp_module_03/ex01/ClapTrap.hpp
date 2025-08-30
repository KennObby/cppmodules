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
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(const std::string& name, int hp, int en, int dm);
		virtual ~ClapTrap();

		ClapTrap(const ClapTrap &);
		ClapTrap &operator=(const ClapTrap &);

		virtual void		attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);

		virtual const char* role() const;

	private:
		std::string 		_name;
		int					_hit_points;
		int					_energy_points;
		int					_attack_dmg;

	protected:
		void				decEnergy() 			  			{ --_energy_points; }
		void				addHP(int a) 			  			{ _hit_points += a; }
		void				subHP(int a) 			  			{ _hit_points -= a; }
		int					getAttackDamage()	const 			{ return _attack_dmg; }
		int					getHitPoints()		const 			{ return _hit_points; }
		int					getEnergyPoints()	const 			{ return _energy_points; }
		const std::string&	getName() 			const	  		{ return _name; }

};

#endif

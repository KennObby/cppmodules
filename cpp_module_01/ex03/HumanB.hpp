/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumamB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:57:42 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/17 20:02:25 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

class HumanB {
	
	private:
		std::string		_name;
		Weapon			*_weapon;

	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};


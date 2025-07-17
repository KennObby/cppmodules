/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:24:41 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/17 19:30:32 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

class HumanA {

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();

	private:
		std::string	_name;
		Weapon		&_weapon;
};

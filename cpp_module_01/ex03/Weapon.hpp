/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:21:37 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/17 17:44:54 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

public:
	Weapon(std::string type);
	~Weapon();

	void	setType(const std::string& type);

	const std::string&	getType() const;

private:
	std::string 	_type;
};

#endif

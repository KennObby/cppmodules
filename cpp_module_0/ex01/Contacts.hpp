/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:08:56 by oilyine-          #+#    #+#             */
/*   Updated: 2025/04/10 17:20:29 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <string>
/*
 * So basically the behaviour of defining a class in .hpp
 * results by defining prototypes functions, accesories(getters) 
 * and setters on public and variables on private (only ? We will se later)
 */
class Contacts
{
	Contacts();

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
}

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
#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <string>
/*
 * So basically the behaviour of defining a class in .hpp
 * results by defining prototypes functions, accessories(getters) 
 * and setters on public and variables on private (only ? We will see later..)
 */
class Contacts
{
	public:
		Contacts();

		void	SetFirstName(const std::string& value);
		void	SetLastName(const std::string& value);
		void	SetNickName(const std::string& value);
		void	SetPhoneNumber(const std::string& value);
		void	SetDarkestSecret(const std::string& value);

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif

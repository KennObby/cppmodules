/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:35:01 by oilyine-          #+#    #+#             */
/*   Updated: 2025/04/10 16:36:58 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <string>

class Phonebook
{
	public:
		Phonebook();
		void	add_contacts();
		void	search_contacts();
		void	exit_phonebook();

		std::string	formatField(const std::string& field);
		bool		is_empty_field(const std::string& field) const;
	private:
		static const int MAX_CONTACTS = 8;
		Contacts contacts[MAX_CONTACTS];
		int	contact_counter;
};

#endif

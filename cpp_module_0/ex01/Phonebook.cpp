/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:08:24 by oilyine-          #+#    #+#             */
/*   Updated: 2025/04/11 11:27:15 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook() contact_counter(0) ();

Phonebook::add_contacts() {
	if (contact_counter >= MAX_CONTACTS) {
		std::cout << "Phonebook is full" << std::endl;
		return ;
	// Logic off adding contacts here.
	contact_counter++;
}

Phonebook::search_contacts(){
	//logic off searching contacts here
}

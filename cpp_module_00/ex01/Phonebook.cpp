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
#include "Contacts.hpp"
#include <cctype>
#include <sstream>
#include <cstddef>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>

Phonebook::Phonebook() : contact_counter(0) {}

bool	Phonebook::is_empty_field(const std::string& field) const {
	return field.empty();
}

void	Phonebook::add_contacts() {
	
	std::string input;
	Contacts new_contact;
	
	if (contact_counter >= MAX_CONTACTS) {
		std::cout << "Phonebook is full" << std::endl;
		return ;
	}

	std::cout << "Enter fist name: ";
	std::getline(std::cin, input);
	new_contact.SetFirstName(input);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, input);
	new_contact.SetLastName(input);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, input);
	new_contact.SetNickName(input);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, input);
	new_contact.SetPhoneNumber(input);

	std::cout << "Enter a Darkest Secret: ";
	std::getline(std::cin, input);
	new_contact.SetDarkestSecret(input);

	if (is_empty_field(new_contact.getFirstName()) ||
		is_empty_field(new_contact.getLastName()) || 
		is_empty_field(new_contact.getNickName()) ||
		is_empty_field(new_contact.getDarkestSecret()) ||
		is_empty_field(new_contact.getDarkestSecret())) {

		std::cout << "Error: All fields must be filled. Contact not saved \n";
		return ;
	}
	std::cout << "\n";
	contacts[contact_counter % MAX_CONTACTS] = new_contact;
	contact_counter++;
};

std::string	Phonebook::formatField(const std::string& field) {
	
	if (field.length() > 10)
		return field.substr(0, 9) + ".";
	else
	 	return std::string(10 - field.length(), ' ') + field;
};

void	Phonebook::search_contacts() {
	
	std::string			index_input;
	int					index;
	int					displayed = (contact_counter < MAX_CONTACTS)
									? contact_counter : MAX_CONTACTS;
	bool				is_digit = true;

	std::cout << "|"
			  << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << "|"
			  << std::endl;
	for (int i = 0; i < displayed; i++) {
		std::cout << "|"
				  << std::setw(10) << i << "|"
				  << formatField(contacts[i].getFirstName()) << "|"
				  << formatField(contacts[i].getLastName()) << "|"
				  << formatField(contacts[i].getNickName()) << std::endl;
	}

	std::cout << "Enter index to view contact: ";
	std::getline(std::cin, index_input);

	for (size_t i = 0; i < index_input.length(); i++ ) {
		if (!std::isdigit(index_input[i])) {
			is_digit = false;
			break ;
		}
	}

	if (!is_digit) {
		std::cout << "Invalid input: not a number." << std::endl;
		return ;
	}

	std::stringstream ss(index_input);
	ss >> index;
	if (ss.fail() || !ss.eof()) {
		std::cout << "Invalid input: parse error." << std::endl;
		return ;
	}

	if (index < 0 || index >= contact_counter) {
		std::cout << "Invalid index: out of range." << std::endl;
		return ;
	}

	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
};

void	Phonebook::exit_phonebook() {
	std::cout << "Goodbye!" << std::endl;
};

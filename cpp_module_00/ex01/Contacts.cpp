/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:56:34 by oilyine-          #+#    #+#             */
/*   Updated: 2025/04/11 10:56:49 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include <string>

Contacts::Contacts()
	: first_name(""), last_name(""), nickname(""),
	  phone_number(""), darkest_secret("") {}

void	Contacts::SetFirstName(const std::string& value) {
	first_name = value;
}

void	Contacts::SetLastName(const std::string& value) {
	last_name = value;
}

void	Contacts::SetNickName(const std::string& value) {
	nickname = value;
}

void	Contacts::SetPhoneNumber(const std::string& value) {
	phone_number = value;
}

void	Contacts::SetDarkestSecret(const std::string& value) {
	darkest_secret = value;
}

std::string	Contacts::getFirstName() const {
	return first_name;
}

std::string	Contacts::getLastName() const {
	return last_name;
}

std::string	Contacts::getNickName() const {
	return nickname;
}

std::string Contacts::getPhoneNumber() const {
	return phone_number;
}

std::string	Contacts::getDarkestSecret() const {
	return darkest_secret;
}

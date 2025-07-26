/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 18:51:17 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/25 18:56:03 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

const int	Fixed::_fract = 8;

Fixed::Fixed() : _value() {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int other) {
	std::cout << "Int constructor called" << std::endl;
	_value = other << _fract;
}

Fixed::Fixed(float other) {
	std::cout << "Float constructor called " << std::endl;
	_value = roundf(other * (1 << _fract));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	_value = other._value;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		_value = other._value;
	}
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called " << std::endl;
	return _value;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called " << std::endl;
	_value = raw;
}

float	Fixed::toFloat( void ) const {
	return (float)_value / (1 << _fract) ;
}

int		Fixed::toInt( void ) const {
	return _value >> _fract;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value) {
	out << value.toFloat();
	return (out);
}

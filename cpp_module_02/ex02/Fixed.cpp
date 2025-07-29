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

const int	Fixed::_fract = 8;

Fixed::Fixed() : _value() {}

Fixed::Fixed(int other) {
	_value = other << _fract;
}

Fixed::Fixed(float other) {
	_value = roundf(other * (1 << _fract));
}

Fixed::Fixed(const Fixed &other) {
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		_value = other.getRawBits();
	}
	return (*this);
}

bool Fixed::operator>(const Fixed &other) const{
	return (this->_value > other._value);
}

bool Fixed::operator<(const Fixed &other) const {
	return (this->_value < other._value);
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->_value >= other._value);
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->_value <= other._value);
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->_value != other._value);
}

Fixed Fixed::operator+(const Fixed &other) const{
	Fixed	result;
	result.setRawBits(this->_value + other._value);
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const{
	Fixed	result;
	result.setRawBits(this->_value - other._value);
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed	result;
	long tmp = (long)this->_value * (long)other._value;
	result.setRawBits(tmp >> _fract);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed	result;
	if (other._value == 0) {
		std::cerr << "Error: division by zero" << std::endl;
		return (result);
	}
	long tmp = (long)this->_value / (long)other._value;
	result.setRawBits(tmp >> _fract);
	return (result);
}

Fixed &Fixed::operator++() {
	_value++;
	return (*this);
}
Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	_value++;
	return (tmp);
}

Fixed &Fixed::operator--() {
	_value--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	_value--;
	return (tmp);
}

Fixed::~Fixed() {}

int	Fixed::getRawBits( void ) const{
	return _value;
}

void Fixed::setRawBits(const int raw) {
	_value = raw;
}

float	Fixed::toFloat( void ) const {
	return (float)_value / (1 << _fract) ;
}

int		Fixed::toInt( void ) const {
	return _value >> _fract;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return ((a > b) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return ((a > b) ? a : b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value) {
	out << value.toFloat();
	return (out);
}

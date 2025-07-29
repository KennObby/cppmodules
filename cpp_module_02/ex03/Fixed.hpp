/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:16:09 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/25 15:51:59 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(int other);
	Fixed(float other);
	Fixed &operator=(const Fixed &);
	bool operator>(const Fixed &) const;
	bool operator<(const Fixed &) const;
	bool operator>=(const Fixed &) const;
	bool operator<=(const Fixed &) const;
	bool operator==(const Fixed &) const;
	bool operator!=(const Fixed &) const;
	Fixed operator+(const Fixed &) const;
	Fixed operator-(const Fixed &) const;
	Fixed operator*(const Fixed &) const;
	Fixed operator/(const Fixed &) const;
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	~Fixed();
	float	toFloat( void ) const;
	static Fixed& min (Fixed& a, Fixed& b);
	static const Fixed& min (const Fixed& a, const Fixed& b);
	static Fixed& max (Fixed& a, Fixed& b);
	static const Fixed& max (const Fixed& a, const Fixed& b);
	int		toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int 				_value;
	static const int	_fract;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif

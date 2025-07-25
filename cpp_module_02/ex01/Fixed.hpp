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

# include <cfloat>
# include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(int other);
	Fixed(float other);
	Fixed &operator=(const Fixed &);
	~Fixed();
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int 				_value;
	static const int	_fract;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif

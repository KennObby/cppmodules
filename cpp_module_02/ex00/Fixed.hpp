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

#include <cfloat>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int 				_value;
	static const int	_fract;
};

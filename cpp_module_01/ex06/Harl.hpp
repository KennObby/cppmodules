/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oilyine- <oleg.ilyine@student42.luxembour  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:32:20 by oilyine-          #+#    #+#             */
/*   Updated: 2025/07/23 15:41:05 by oilyine-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl {

	private:
		void 	debug( void );
		void 	info( void );
		void 	warning( void );
		void 	error( void );
		int		getLevelIndex(std::string level);

	public:
		void	complainFilter( std::string level );
};

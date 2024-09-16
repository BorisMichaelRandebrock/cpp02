/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:06:29 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/16 17:10:19 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					_number;
		const static int	_bits = 8;

	public:
		Fixed(void);
		Fixed(const int number);
		Fixed(const float bits); 
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed(void);
		int getRawBits( void ) const;
		float toFloat( void ) const;
		int toInt( void ) const;
		void setRawBits( int const raw );
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif


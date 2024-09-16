/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:06:29 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/16 13:17:02 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
	private:
		int					_number;
		const static int	_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		~Fixed(void);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif


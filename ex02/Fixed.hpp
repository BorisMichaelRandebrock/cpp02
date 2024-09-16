/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:06:29 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/16 18:41:32 by brandebr         ###   ########.fr       */
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
		bool	operator>(const Fixed &copy) const;
		bool	operator<(const Fixed &copy) const;
		bool	operator>=(const Fixed &copy) const;
		bool	operator<=(const Fixed &copy) const;
		bool	operator==(const Fixed &copy) const;
		bool	operator!=(const Fixed &copy) const;
		Fixed	operator+(const Fixed &copy) const;
		Fixed	operator-(const Fixed &copy) const;
		Fixed	operator*(const Fixed &copy) const;
		Fixed	operator/(const Fixed &copy) const;
	
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int number);
		Fixed	operator--(int number);
		~Fixed(void);
		int getRawBits( void ) const;
		float toFloat( void ) const;
		int toInt( void ) const;
		void setRawBits( int const raw );
		static Fixed & min(Fixed &copy1, Fixed &copy2);
		static Fixed const & min(const Fixed &copy1, const Fixed &copy2);
		static Fixed & max(Fixed &copy1, Fixed &copy2);
		static Fixed const & max(const Fixed &copy1, const Fixed &copy2);

};

std::ostream	&operator<<(std::ostream &str, const Fixed &fixed_nbr);

#endif


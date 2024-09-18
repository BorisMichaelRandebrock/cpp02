/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:02:29 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/18 14:05:08 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	
	Point	a(5, 5);
	Point	b(2, 9);
	Point	c(0, 5);
	Point	p(3, 7);
	Point	p2(4, 7);
	std::string answer;

	std::cout << "Point a.x = " << a.getX() << " a.y = " << a.getY() << std::endl;
	std::cout << "Point b.x = " << b.getX() << " b.y = " << b.getY() << std::endl;
	std::cout << "Point c.x = " << c.getX() << " c.y = " << c.getY() << std::endl;
	std::cout << "Point p.x = " << p.getX() << " p.y = " << p.getY() << std::endl;
	std::cout << "Point p2.x = " << p2.getX() << " p2.y = " << p2.getY() << std::endl;
	bsp(a,b,c,p) ? answer = " is inside the triangle ◬" : answer = " is outside the triangle ⧊";
	std::cout << p << answer << std::endl;
	bsp(a,b,c,p2) ? answer = " is inside the triangle ◬" : answer = " is outside the triangle ⧊";
	std::cout << p2 << answer << std::endl;
	return 0;
}

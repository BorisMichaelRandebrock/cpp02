/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:02:29 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/18 19:08:53 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <cstdlib>
#include <cstring> // for strcmp

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[1;33m"

bool isValidFloat(const char *str) {
	char *endptr;
	std::strtod(str, &endptr);
	return (*endptr == '\0') && (endptr != str);
}

int main(int argc, char **argv ) {

	Point	a(5, 5);
	Point	b(2, 9);
	Point	c(0, 5);
	Point	p(3, 7);
	Point	p2(4, 7);
	std::string answer;
	if (argc == 9) {
		bool validArgs = true;
		for (int i = 1; i < argc; ++i) {
			if (!isValidFloat(argv[i])) {
				validArgs = false;
				break;
			}
		}
		if (validArgs) {
			a = Point(atof(argv[1]), atof(argv[2]));
			b = Point(atof(argv[3]), atof(argv[4]));
			c = Point(atof(argv[5]), atof(argv[6]));
			p = Point(atof(argv[7]), atof(argv[8]));
			std::cout << "******************************************" <<std::endl;
			std::cout << "Triangle: (" << a.getX() << "," << a.getY() << "), (" << b.getX() 
				<< ","  << b.getY() << ") and (" << c.getX() << ","  << c.getY() << ")" << std::endl;
			bsp(a,b,c,p) ? answer = GREEN " is inside the triangle ◬" : answer = YELLOW " is outside the triangle ⧊";
			std::cout << p << answer << RESET << std::endl;
			std::cout << "******************************************" <<std::endl;
		} else {
			std::cout << RED << "Error: One or more arguments are not valid floating-point numbers." << RESET << std::endl;
		}
	} else {
		std::cout << RED << "Since you provided none, or not exactly 8 numerical arguments you are seing the standard output" << std::endl;
		std::cout << "You provided " << argc - 1 << " arguments." << RESET << std::endl;
		std::cout << "Triangle: (" << a.getX() << "," << a.getY() << "), (" << b.getX() 
			<< ","  << b.getY() << ") and (" << c.getX() << ","  << c.getY() << ")" << std::endl;
		std::cout << "Point a.x = " << a.getX() << " a.y = " << a.getY() << std::endl;
		std::cout << "Point b.x = " << b.getX() << " b.y = " << b.getY() << std::endl;
		std::cout << "Point c.x = " << c.getX() << " c.y = " << c.getY() << std::endl;
		std::cout << "Point p.x = " << p.getX() << " p.y = " << p.getY() << std::endl;
		std::cout << "Point p2.x = " << p2.getX() << " p2.y = " << p2.getY() << std::endl;
		bsp(a,b,c,p) ? answer = " is inside the triangle ◬" : answer = " is outside the triangle ⧊";
		std::cout << p << answer << std::endl;
		bsp(a,b,c,p2) ? answer = " is inside the triangle ◬" : answer = " is outside the triangle ⧊";
		std::cout << p2 << answer << std::endl;
	}
	return 0;
}

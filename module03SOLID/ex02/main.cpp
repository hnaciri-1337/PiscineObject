/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:58:38 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/19 12:29:08 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rectangle.hpp"
#include "Triangle.hpp"
#include "Circle.hpp"
#include <iostream>

int	main() {
	Shape	*shapes[3];

	for (size_t i = 0; i < 3; i++) {
		if (i % 3 == 0)
			shapes[i] = new Triangle(8, 5, 7);
		else if (i % 3 == 1)
			shapes[i] = new Rectangle(6, 17);
		else
			shapes[i] = new Circle(7.3);
	}
	
	for (size_t i = 0; i < 3; i++) {
		std::cout << shapes[i]->getPerimeter() << std::endl;
		std::cout << shapes[i]->getArea() << std::endl;
		std::cout << "---------------" << std::endl;
	}
}

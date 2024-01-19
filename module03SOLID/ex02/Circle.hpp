/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Circle.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:08:50 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/19 12:24:16 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle: public Shape
{
	private:
		double	radius;
	public:
		Circle(): radius(0) {}
		Circle(double r): radius(r) {}
		double	getArea() {
			return M_PI * radius * radius;
		}
		double	getPerimeter() {
			return M_PI * radius * 2;
		}
		~Circle() {}
};

#endif

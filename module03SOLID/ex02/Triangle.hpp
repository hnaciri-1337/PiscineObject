/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:16:57 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/17 17:06:24 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.hpp"

class Triangle: public Shape
{
	private:
		double  side1;
		double  side2;
		double  side3;
	public:
		Triangle(): side1(0), side2(0), side3(0) {}
		Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
		double	getArea() {
			return height * width;
		}
		double	getPerimeter() {
			return side1 + side2, + side3;
		}
		virtual ~Triangle() {}
};

#endif

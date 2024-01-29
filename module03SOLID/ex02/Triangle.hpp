/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Triangle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:16:57 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/19 12:21:37 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.hpp"
#include <cmath>

class Triangle: public Shape
{
	private:
		double  sideA;
		double  sideB;
		double  sideC;
	public:
		Triangle(): sideA(0), sideB(0), sideC(0) {}
		Triangle(double s1, double s2, double s3) : sideA(s1), sideB(s2), sideC(s3) {}
		double	getArea() {
			double	Area = (sideA + sideB + sideC) * (sideA + sideB - sideC) * (sideA + sideC - sideB) * (sideB + sideC - sideA);

			Area = sqrt(Area) / 4;
			return Area;
		}
		double	getPerimeter() {
			return sideA + sideB + sideC;
		}
		~Triangle() {}
};

#endif

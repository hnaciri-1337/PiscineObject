/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector2.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:03:33 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 19:52:18 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector2.hpp"

Vector2::Vector2(float x, float y, Graph &g): graphRef(g) {
	this->X = x;
	this->Y = y;
}

void	Vector2::deleteMyVector2() {
	return this->graphRef.deleteVector2(this);
}

float	Vector2::getX() {
	return X;
}

float	Vector2::getY() {
	return Y;
}

Vector2::~Vector2() {}

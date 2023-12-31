/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Position.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:20:23 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:20:35 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Position.hpp"

void    Position::setX(int &x) {
    this->x = x;
}

void    Position::setY(int &y) {
    this->y = y;
}

void    Position::setZ(int &z) {
    this->z = z;
}

int Position::getX() const {
    return x;
}

int Position::getY() const {
    return y;
}

int Position::getZ() const {
    return z;
}

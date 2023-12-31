/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Statistic.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:20:58 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:21:06 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Statistic.hpp"

void    Statistic::setLevel(int &level) {
    this->level = level;
}

void    Statistic::setExp(int &exp) {
    this->exp = exp;
}

int Statistic::getLevel() const {
    return level;
}

int Statistic::getExp() const {
    return exp;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:20:42 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:58:51 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hammer.hpp"

Hammer::Hammer() {
    numberOfUses = 0;
    user = NULL;
}

void    Hammer::use() {
    numberOfUses++;
    printUseMessage("HAMMER");
}

Hammer::~Hammer() {
    freeTool();
}

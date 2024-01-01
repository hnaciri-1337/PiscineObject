/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:20:42 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:56:20 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Shovel.hpp"

Shovel::Shovel() {
    numberOfUses = 0;
    user = NULL;
}

void    Shovel::use() {
    numberOfUses++;
    printUseMessage("SHOVEL");
}

Shovel::~Shovel() {
    freeTool();
}

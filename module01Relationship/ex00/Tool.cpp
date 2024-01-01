/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tool.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:51:23 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/01 21:16:50 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Worker.hpp"
#include "Tool.hpp"

void	Tool::freeTool() {
	if (user != NULL)
		user->removeTool(this);
	user = NULL;
}

void	Tool::printUseMessage(std::string toolName) const {
    std::cout << user->getLevel() << " :" << user->getName() << std::endl;
	std::cout << "Using " << toolName << " in " << user->getPosition() << " for the " << numberOfUses;

	if (numberOfUses % 10 == 1)
		std::cout << "st";
	else if (numberOfUses % 10 == 2)
		std::cout << "nd";
	else
		std::cout << "th";
	std::cout << " time" << std::endl;
}

std::string	Tool::getOwnerName() const {
	return user->getName();
}

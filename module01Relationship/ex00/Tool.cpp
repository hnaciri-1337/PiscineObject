/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tool.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:51:23 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:53:48 by hnaciri-         ###   ########.fr       */
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
	std::cout << "Using " << toolName << " in " << user->getPosition() << std::endl;
}

std::string	Tool::getOwnerName() const {
	return user->getName();
}

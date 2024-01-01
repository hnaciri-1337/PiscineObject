/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:21:30 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/01 21:10:18 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Worker.hpp"
#include "Workshop.hpp"

Worker::Worker() {}

Worker::Worker(std::string name, int level, int exp, int x, int y, int z) {
	this->name = name;
	stat.setLevel(level);
	stat.setExp(exp);
	coordonnee.setX(x);
	coordonnee.setY(y);
	coordonnee.setZ(z);
}

int	Worker::getLevel() const {
	return stat.getLevel();
}

std::string Worker::getName() const {
	return name;
}

std::string Worker::getPosition() const {
	return ("[" + std::to_string(coordonnee.getX()) + ", " + std::to_string(coordonnee.getY()) + ", " + std::to_string(coordonnee.getZ()) + "]");
}

void	Worker::work(Tool *tool) {
	std::unordered_set<Tool *>::iterator it = tools.find(tool);
	if (it != tools.end())
		(*it)->use();
}

void	Worker::takeTool (Tool *tool) {
	if (tool != NULL) {
		tool->freeTool();
		tools.insert(tool);
		tool->user = this;
	}
}

void	Worker::removeTool (Tool *tool) {
	if (tool != NULL) {
		std::unordered_set<Tool *>::iterator it = tools.find(tool);
		if (it != tools.end()) {
			tools.erase(tool);
			(*it)->freeTool();
			for (std::unordered_set<Workshop<Tool> *>::iterator _it = workshops.begin(); _it != workshops.end(); _it++)
				(*_it)->cleanWorkshop(this);
		}
	}
}

void	Worker::printInfo() {
	int	hammerCount = 0;
	int	shovelCount = 0;
	for (std::unordered_set<Tool *>::iterator it = tools.begin(); it != tools.end(); it++) {
		if (dynamic_cast<Hammer *> (*it))
			hammerCount++;
		else if (dynamic_cast<Shovel *> (*it))
			shovelCount++;
	}
	std::cout << "---------------\n\n";
	std::cout << "Name :" << getName() << std::endl;
	std::cout << "Level :" << getLevel() << std::endl;
	std::cout << "Position :" << getPosition() << std::endl;
	std::cout << hammerCount << " Hammer" << std::endl;
	std::cout << shovelCount << " Shovel" << std::endl;
	std::cout << "\n---------------\n";
}

Worker::~Worker() {}

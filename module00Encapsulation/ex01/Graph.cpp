/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:57:04 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 21:20:21 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Graph.hpp"
#include "Vector2.hpp"

Graph::Graph(int size) {
	this->size = size;
}

Vector2	&Graph::createVector2(float X, float Y) {
	if (X < 0.0 || Y < 0.0)
		throw std::runtime_error("X and Y must be positive");
	if ((int)points.size() < size) {
		Vector2	*coordinates = new Vector2(X, Y, *this);
		points.push_back(coordinates);
		if ((int)points.size() == size)
			printGraph();
		return *coordinates;
	}
	throw std::runtime_error("Graph is full");
}

void	Graph::deleteVector2(Vector2 *coordinates) {
	std::vector<Vector2 *>::iterator	it = std::find(points.begin(), points.end(), coordinates);
	if (it != points.end()) {
		points.erase(it);
		delete *it;
		return ;
	}
	throw std::runtime_error("Vector2 not found");
}

void	Graph::printGraph() {
	std::cout << *this;
}

Graph::~Graph() {
	for (std::vector<Vector2 *>::iterator it = points.begin(); it != points.end(); it++)
		delete *it;
	points.clear();
}

std::ostream & operator<<(std::ostream &os, Graph &src) {
	int	xMax = 0, yMax = 0;
	
	for (int i = 0; i < (int)src.points.size(); i++) {
		xMax = std::max (xMax, (static_cast<int>(src.points[i]->X + 0.5)));
		yMax = std::max (yMax, (static_cast<int>(src.points[i]->Y + 0.5)));
	}
	std::vector<std::vector<char> > outputVector(yMax + 2, std::vector<char>(xMax + 2, '.'));
	for (int i = 0; i < (int)src.points.size(); i++) {
		int	x = static_cast<int>(src.points[i]->X + 0.5);
		int	y = static_cast<int>(src.points[i]->Y + 0.5);
		outputVector[y][x] = 'X';
	}
	for (int y = (int)outputVector.size() - 1; y >= 0; y--) {
		os << y << " ";
		for (int x = 0; x < (int)outputVector[y].size(); x++) {
			os << outputVector[y][x] << " ";
		}
		os << std::endl;
	}
	os << "  ";
	for (int x = 0; x < (int)outputVector[0].size(); x++) {
		os << x << " ";
	}
	os << std::endl;
	return os;
}

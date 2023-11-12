/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Graph.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:15:09 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 19:48:12 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_HPP
#define GRAPH_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <map>
# include <set>
# include <iterator>

class Vector2;

class Graph
{
	private:
		int	size;
		std::vector<Vector2 *> points;
		Graph();
		Graph(Graph const &src);
		Graph &operator= (Graph const &src);
	public:
		Graph(int size);
		Vector2	&createVector2(float X, float Y);
		void	deleteVector2(Vector2 *coordinates);
		void	printGraph();
		~Graph();
		friend std::ostream & operator<<(std::ostream &os, Graph &src);
};

std::ostream & operator<<(std::ostream &os, Graph &src);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:52:39 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 21:21:24 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector2.hpp"
#include "Graph.hpp"

// • 0/0
// • 2/2
// • 4/2
// • 2/4

int     main()
{
	{
		Graph firstGraph(5);
		firstGraph.createVector2(0.2, 0.4);
		firstGraph.createVector2(1.7, 1.9);
		firstGraph.createVector2(4.1, 2.2);
		firstGraph.createVector2(1.8, 3.7);
		std::cout << firstGraph;
	}
	{
		srand(time(0));
		Graph secondGraph(20);
		for (int i = 0; i < 30; i++) {
			try {
				secondGraph.createVector2(rand() % 25, rand() % 25);
			}
			catch (const std::exception& e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
}
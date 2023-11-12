/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:52:39 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 20:34:37 by hnaciri-         ###   ########.fr       */
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
	Graph a(5);
	a.createVector2(0, 0);
	a.createVector2(2, 2);
	a.createVector2(4, 2);
	a.createVector2(2, 4);
	std::cout << a;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector2.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:46:54 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 20:06:00 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VECTOR2_HPP
#define	VECTOR2_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <map>
# include <iterator>
# include <string>
# include "Graph.hpp"

class Vector2
{
	private:
		float	X;
		float	Y;
		Graph	&graphRef;
		Vector2();
		Vector2(float X, float Y, Graph &g);
		Vector2(Vector2 const &src);
		Vector2 &operator= (Vector2 const &src);
		friend Vector2	&Graph::createVector2(float X, float Y);
		friend void		Graph::deleteVector2(Vector2 *coordiantes);
		friend std::ostream & operator<<(std::ostream &os, Graph &src);
		friend Graph::~Graph();
	public:
		void	deleteMyVector2();
		float	getX(void);
		float	getY(void);
		~Vector2();
};

#endif

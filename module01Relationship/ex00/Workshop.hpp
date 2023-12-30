/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:21:30 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 17:22:27 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Worker.hpp"

class Workshop
{
	private:
		std::set<Worker *>	workers;
	public:
		Workshop(/* args */);
		~Workshop();
};

Workshop::Workshop(/* args */)
{
}

Workshop::~Workshop()
{
}


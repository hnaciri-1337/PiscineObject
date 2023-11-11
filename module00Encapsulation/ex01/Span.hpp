/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:30:17 by hnaciri-          #+#    #+#             */
/*   Updated: 2022/04/29 14:30:23 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define	SPAN_HPP

#include <iostream>
# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>

class Span
{
private:
	std::vector<int>	array;
	int					max;
	int					size;
	Span();
public:
	Span(int n);
	Span(Span const & src);
	Span & operator= (Span const & src);
	void	addNumber(int number);
	void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan();
	int		longestSpan();
	class FullSpan : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return "Error : Full span";
		}
	};
	class EmptySpan : public std::exception
	{
		public:
		virtual const char * what() const throw()
		{
			return "Error : span have one or less value";
		}
	};
	~Span();
};

#endif

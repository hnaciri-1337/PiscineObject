/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:28:40 by hnaciri-          #+#    #+#             */
/*   Updated: 2022/04/29 17:53:22 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(int n)
{
	std::cout << "Constructor with args called" << std::endl;
	this->size = 0;
	this->max = n;
}

Span::Span(Span const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Span & Span::operator= (Span const & src)
{
	std::cout << "Assignment operator called" << std::endl;
	this->array = src.array;
	this->size = src.size;
	this->max = src.max;
	return *this;
}

void	Span::addNumber(int number)
{
	if (this->size == this->max)
		throw Span::FullSpan();
	this->size++;
	this->array.push_back(number);
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}

int	Span::shortestSpan()
{
	if (this->size <= 1)
        throw Span::EmptySpan();

    std::vector<int> temp(this->array);
    std::sort(temp.begin(), temp.end());
    std::vector<int>::iterator min = temp.begin();
    std::vector<int>::iterator next = min;

    next++;
    int	shortest = *next - *min;

    while (next != temp.end())
    {
        if (shortest > *next - *min)
            shortest = *next - *min;
        min++;
        next++;
    }
    return (shortest);
}

int	Span::longestSpan()
{
	if (this->size <= 1)
		throw Span::EmptySpan();

	std::vector<int>::iterator max = std::max_element(this->array.begin(), this->array.end());
	std::vector<int>::iterator min = std::min_element(this->array.begin(), this->array.end());
	return (*max - *min);
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

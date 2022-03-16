/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:59:20 by graja             #+#    #+#             */
/*   Updated: 2022/03/16 13:32:14 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <stdlib.h>

Span::Span(void): _N(0), _data(0)
{}

Span::Span(unsigned int n): _N(n), _data(0)
{}

Span::Span(Span const & cpy): _N(cpy._N), _data(cpy._N)
{
	*this = cpy;
}

Span::~Span(void)
{}

Span & Span::operator=(Span const & right)
{
	this->_data = right._data;
	return (*this);
}

void	Span::addNumber(int const nbr)
{
	if (_data.size() == _N)
		throw Span::SpanIsFullException();
	else
		_data.push_back(nbr);
}

int	Span::shortestSpan(void)
{
	int	min = 0;
	std::vector<int>::iterator	a = _data.begin();
	std::vector<int>::iterator	b = _data.begin();

	if (this->_data.size() < 2)
		throw Span::NoSpanException();
	else
	{
		b++;
		min = abs(*a - *b);
		while (min && a != _data.end() - 1)
		{
			b = a + 1;
			while (min && b != _data.end())
			{
				if (abs(*a - *b) < min)
					min = abs(*a - *b);
				b++;
			}
			a++;
		}
		return (min);
	}
}

int	Span::longestSpan(void)
{
	int	min = 0;
	int	max = 0;
	std::vector<int>::iterator	a = _data.begin();

	if (this->_data.size() < 2)
		throw Span::NoSpanException();
	else
	{
		min = *a;
		max = *a;
		while (a != _data.end())
		{
			if (*a < min)
				min = *a;
			if (*a > max)
				max = *a;
			a++;
		}
		return (abs(max - min));
	}
}

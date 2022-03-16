/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:59:20 by graja             #+#    #+#             */
/*   Updated: 2022/03/16 17:47:18 by graja            ###   ########.fr       */
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

void	Span::addNumber(std::vector<int>::iterator const a, std::vector<int>::iterator const b)
{
	if (b - a > _N)
		throw Span::SpanIsFullException();
	else
		_data.assign(a, b);
}

unsigned int	Span::shortestSpan(void) const
{
	std::vector<int>		cpy(_data);
	int				min = 0;
	std::vector<int>::iterator	a = cpy.begin();
	std::vector<int>::iterator	b = cpy.begin();

	if (cpy.size() < 2)
		throw Span::NoSpanException();
	else
	{
		b++;
		min = abs(*a - *b);
		while (min && a != cpy.end() - 1)
		{
			b = a + 1;
			while (min && b != cpy.end())
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

unsigned int	Span::longestSpan(void) const
{
	std::vector<int>	cpy(_data);

	if (_data.size() < 2)
		throw Span::NoSpanException();
	else
	{
		return (*std::max_element(cpy.begin(), cpy.end()) -
			*std::min_element(cpy.begin(), cpy.end()));
	}
}

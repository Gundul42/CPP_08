/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:59:20 by graja             #+#    #+#             */
/*   Updated: 2022/03/17 13:35:11 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

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
	std::vector<int>::iterator	it;

	if (cpy.size() < 2)
		throw Span::NoSpanException();
	else
	{
		std::sort(cpy.begin(), cpy.end());
		it = cpy.begin();
		min = *(it + 1) - *it;
		while (min && (it != (cpy.end() - 1)))
		{
			if ((*(it + 1) - *it) < min)
				min = *(it + 1) - *it;
			it++;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:59:20 by graja             #+#    #+#             */
/*   Updated: 2022/03/15 19:06:05 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void): _N(0), _data(0)
{}

Span::Span(unsigned int n): _N(n), _data(n)
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

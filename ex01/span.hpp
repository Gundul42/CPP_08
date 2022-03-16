/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:24:31 by graja             #+#    #+#             */
/*   Updated: 2022/03/16 13:16:00 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <stdexcept>
# include <iostream>
# include <algorithm>

class Span
{
	private:
		unsigned int const		_N;
		std::vector<int>	_data;

	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const & cpy);
		~Span(void);

		Span & operator=(Span const & right);

		void    addNumber(int const nbr);
                int     shortestSpan(void);
                int     longestSpan(void);

	class SpanIsFullException : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Span max entries reached");
			}
	};
	
	class NoSpanException : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Not enough data for a span");
			}
	};
};

#endif

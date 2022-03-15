/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:24:31 by graja             #+#    #+#             */
/*   Updated: 2022/03/15 19:13:13 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <stdexcept>

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

	class SpanIsFullexception : public std::exception
	{
		public:
			virtual const char * what() const throw ()
			{
				return ("ERROR: Span max entries reached");
			}
	};
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:24:02 by graja             #+#    #+#             */
/*   Updated: 2022/03/16 13:45:16 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int	main(void)
{
	Span	test(11);
	Span	test1;
	Span	test2(test);

	test1 = test2;
	try
	{
		test.addNumber(12);
		test.addNumber(12);
		test.addNumber(2);
		test.addNumber(1);
		test.addNumber(-31);
		test.addNumber(-1);
		test.addNumber(1121);
		test.addNumber(-21);
		test.addNumber(221);
		test.addNumber(321);
		test.addNumber(-421);
		test.addNumber(10000);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

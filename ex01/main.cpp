/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:24:02 by graja             #+#    #+#             */
/*   Updated: 2022/03/16 18:06:41 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int	main(void)
{
	Span	test(11);
	Span	test1;
	Span	test2(test);

	//init random generator
	srand(time(NULL));

	std::cout << "First part:" << std::endl << std::endl;
	//try adding numbers, but too much
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

	//try the operator= overload
	test1 = test;

	//checkout and print the spans
	try
	{
		std::cout << test1.shortestSpan() << std::endl;
		std::cout << test1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Second part:" << std::endl << std::endl;
	//********************************
	//*** Second part
	//********************************
	std::vector<int>	arr;
	int	i = 0;
	Span	btest(20000);

	while (i < 50000)
	{
		arr.push_back(rand() % 100000);
		i++;
	}

	//try with one too much
	try
	{
		btest.addNumber(arr.begin(), arr.begin() + 20001);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//printout the spans
	try
	{
		std::cout << btest.shortestSpan() << std::endl;
		std::cout << btest.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;	
	//try better and with max possible 
	try
	{
		btest.addNumber(arr.begin(), arr.begin() + 20000);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//printout the spans
	try
	{
		std::cout << btest.shortestSpan() << std::endl;
		std::cout << btest.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

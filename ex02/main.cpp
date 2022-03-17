/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:22:22 by graja             #+#    #+#             */
/*   Updated: 2022/03/17 11:19:48 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

int	main(void)
{
	//changing comments to try ith STL stack
	MutantStack<int>	test;
	//std::stack<int>		test;
	
	test.push(10);
	test.push(-3);
	test.push(1210);
	test.push(391281);
	test.push(-12897);
	test.push(666);

	std::cout << "Member function size: " << test.size() << std::endl;
	test.push(-333);
	std::cout << "Member function top: " << test.top() << std::endl;
	test.pop();
	std::cout << "Member function pop: " << test.top() << std::endl;
	std::cout << "Test is "; 
	if (!test.empty())
		std::cout << "not ";
	std::cout << "empty" << std::endl;

	//changing comments to try ith STL stack
	MutantStack<int>::iterator	itt = test.begin();
	//std::stack<int>::iterator	itt = test.begin();
	
	while (itt != test.end())
	{
		std::cout << *itt << ", ";
		itt++;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	//
	//School main :
	//
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Last element = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size =" << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Iterating :" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	return (0);
}

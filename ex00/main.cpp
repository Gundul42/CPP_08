/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:35:45 by graja             #+#    #+#             */
/*   Updated: 2022/03/15 18:09:52 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>		// dynamic array	random access iterator
#include <list>			// double linked list	bidirectional iterator
#include <deque>		// double ended queue	random access iterator

int	main(void)
{
	std::vector<int>		test = {0, 1, 2, 3, 4, -5, 6, 7, 8, 9};
	std::vector<int>::iterator it = test.begin();
	int				sfor = -500;

	while (it != test.end())
	{
		std::cout << *it << ", ";
		it++;
	}
	std::cout << std::endl;
	std::cout << ">>> " << sfor << " <<< was ";
	if (!EasyFind(test, sfor))
	     std::cout << "not ";
	std::cout << "found !" << std::endl << std::endl;

	//now with std::list container
	std::list<int>		test1 = {-12, 12332, 112, -500, 1, 2, 4, -234};
	std::list<int>::iterator it1 = test1.begin();
	int				sfor1 = -500;

	while (it1 != test1.end())
	{
		std::cout << *it1 << ", ";
		it1++;
	}
	std::cout << std::endl;
	std::cout << ">>> " << sfor1 << " <<< was ";
	if (!EasyFind(test1, sfor1))
	     std::cout << "not ";
	std::cout << "found !" << std::endl << std::endl;

	//now with std::deque container
	std::deque<int>		test2 = {2, 132, 12, 0, -1231, 1282, -14, 34};
	std::deque<int>::iterator it2 = test2.begin();
	int				sfor2 = 0;

	while (it2 != test2.end())
	{
		std::cout << *it2 << ", ";
		it2++;
	}
	std::cout << std::endl;
	std::cout << ">>> " << sfor2 << " <<< was ";
	if (!EasyFind(test1, sfor2))
	     std::cout << "not ";
	std::cout << "found !" << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:24:02 by graja             #+#    #+#             */
/*   Updated: 2022/03/15 19:12:33 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int	main(void)
{
	Span	test(10);
	Span	test1;
	Span	test2(test);

	test1 = test2;
	return (0);
}

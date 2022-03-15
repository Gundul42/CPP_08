/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:29:23 by graja             #+#    #+#             */
/*   Updated: 2022/03/15 17:39:29 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

template <typename T>
bool	EasyFind(T cont, int nbr)
{
	typename T::iterator	it = cont.begin();

	while (it != cont.end())
	{
		if (*it == nbr)
			return (true);
		it++;
	}
	return (false);
}

#endif

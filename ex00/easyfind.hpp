/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:29:23 by graja             #+#    #+#             */
/*   Updated: 2022/03/17 12:53:09 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>
# include <stdexcept>

class EasyNotFoundException : public std::exception
{
	public:
		virtual const char * what() const throw ()
		{
			return ("ERROR: Nothing could be found");
		}
};

template <typename T>
void	EasyFind(T cont, int nbr)
{
	if (std::find(cont.begin(), cont.end(), nbr) == cont.end())
		throw EasyNotFoundException();
}

#endif

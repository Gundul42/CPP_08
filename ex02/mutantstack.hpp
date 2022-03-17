/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:24:09 by graja             #+#    #+#             */
/*   Updated: 2022/03/17 10:49:35 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

	MutantStack<T>(void) {}
	MutantStack<T>(MutantStack const & cpy) {*this = cpy;}
	~MutantStack<T>(void) {}

	MutantStack & operator=(MutantStack const & right) {return right;}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator const	begin(void) {return this->c.begin();}
	iterator const	end(void) {return this->c.end();}
};

#endif

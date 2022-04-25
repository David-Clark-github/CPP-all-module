/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <dclark@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:09:14 by david             #+#    #+#             */
/*   Updated: 2022/04/25 11:51:34 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

#define AUTO std::vector<int>::const_iterator

class Span {
	public:
		Span(unsigned int N);
		Span(unsigned int S, unsigned int E);
		Span(const Span & s);
		Span &operator=(const Span & s);
		~Span();

		//Accessor
		void			setSize(const unsigned int size);
		unsigned int	getSize(void);
		unsigned int	getSizeVal(void);
		
		//Fonction membre
		void			addNumber(unsigned int n);
		unsigned int	shortestSpan(void)const;
		unsigned int	longestSpan(void)const;

	private:
		std::vector<int>	_myVar;
		unsigned int		_sizeMax;
};
